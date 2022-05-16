#pragma once

#include "calculate.h"
int flag = 0;
bool flag1 = 0;
System::String^ Button_print(System::String^ s, System::String^ symbol, int k) {
	if (s->Length != 0) {
		switch (k) {
		case 0:
			if (s[s->Length - 1] == '/' && symbol == "0") {
				s = "Îøèáêà";
			}
			else if (s[s->Length - 1] == ')') {
				s += "*" + symbol;
			}
			else {
				s += symbol;
			}
			break;
		case 1:
			if (isdigit(s[s->Length - 1]) && !flag1) {
				s += ",";
				flag1 = 1;
			}
			break;
		case 2:
			if (isdigit(s[s->Length - 1]) || s[s->Length - 1] == ')') {
				s += symbol;
			}
			else if (s[s->Length - 1] != ',' || s[s->Length - 1] != '(') {
				s = s->Substring(0, s->Length - 1);
				s += symbol;
			}
			flag1 = 0;
			break;
		}
	}
	else if (k == 0) {
		s += symbol;
	}
	return s;
}

System::String^ erase_all(System::String^ s, int k) {
	switch (k) {
	case 0:
		if (s->Length != 0) {
			if (s[s->Length - 1] == '(') {
				flag--;
			}
			if (s[s->Length - 1] == ')') {
				flag++;
			}
			if (s[s->Length - 1] == ',') {
				flag1 = 0;
			}
			s = s->Substring(0, s->Length - 1);
		}
		break;
	case 1:
		s = (s->Substring(0, 0));
		flag = 0;
		flag1 = 0;
		break;
	}
	return s;
}

System::String^ equals(System::String^ s) {
	System::String^ s_print = s;
	if (s->Length != 0) {
		if (flag == 0 && (isdigit(s[s->Length - 1]) || s[s->Length - 1] == ')')) {
			s_print = System::Convert::ToString(calculate_str(s));
		}
		else {
			s_print = "Îøèáêà";
		}
		return s_print;
	}
}

System::String^ parentheses(System::String^ s, int k) {
	if (s->Length != 0) {
		if (k == 0 && flag != 0 && (isdigit(s[s->Length - 1]) || s[s->Length - 1] == ')')) {
			s += ")";
			flag--;
			flag1 = 0;
		}
		else if (k == 1) {
			if (!(isdigit(s[s->Length - 1])) && s[s->Length - 1] != ',' && s[s->Length - 1] != ')') {
				s += "(";
				flag++;
			}
			else if (s[s->Length - 1] != ',') {
				s += "*(";
				flag++;
			}
		}
	}
	else if (k == 1) {
		s += "(";
		flag++;
	}
	return s;
}