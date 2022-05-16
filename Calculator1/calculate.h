#pragma once

#include <iostream>
#include <stack>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

stack<char> str;
stack<double> num;

void operation(char s);
double calculate_str(System::String^ s) {
    s += "=";
    for (int i = 0; i < s->Length; i++) {
        if (s[i] == '^') {
            while (str.size()) {
                if (str.top() == '+' || str.top() == '-' || str.top() == '/' || str.top() == '*' || str.top() == '(') {
                    break;
                }
                operation(str.top());
            }
            str.push(s[i]);
        }
        else if (s[i] == '/') {
            while (str.size()) {
                if (str.top() == '+' || str.top() == '-' || str.top() == '(') {
                    break;
                }
                operation(str.top());
            }
            str.push(s[i]);
        }
        else if (s[i] == '*') {
            while (str.size()) {
                if (str.top() == '+' || str.top() == '-' || str.top() == '(') {
                    break;
                }
                operation(str.top());
            }
            str.push(s[i]);
        }
        else  if (s[i] == '+') {
            while (str.size()) {
                if (str.top() == '(') {
                    break;
                }
                operation(str.top());
            }

            str.push(s[i]);
        }
        else   if (s[i] == '-') {
            while (str.size()) {
                if (str.top() == '(') {
                    break;
                }
                operation(str.top());
            }
            str.push(s[i]);
        }
        else if (s[i] == '(') {
            str.push(s[i]);
        }
        else if (s[i] == ')') {
            while (str.size()) {
                if (str.top() == '(') {
                    str.pop();
                    break;
                }
                operation(str.top());
            }
        }
        else if (isdigit(s[i])) {
            double n1 = 0, n2 = 0;
            while (isdigit(s[i])) {
                n1 = n1 * 10 + (s[i] - '0');
                i++;
            }
            if (s[i] == ',') {
                i++;
                while (isdigit(s[i])) {
                    n2 = n2 + double(s[i] - '0') / 10;
                    i++;
                }
            }
            i--;
            n1 += n2;
            num.push(n1);
        }
    }

    while (str.size()) {
        operation(str.top());
    }
    return num.top();
}

void operation(char s) {
    double a, b;
    if (num.size() > 1) {
        a = num.top();
        num.pop();
        b = num.top();
        num.pop();
        switch (s) {
            case '+': {
                b += a;
                str.pop();
                num.push(b);
                break;
            }
            case '-': {
                b -= a;
                str.pop();
                num.push(b);
                break;
            }
            case '*': {
                b *= a;
                str.pop();
                num.push(b);
                break;
            }
            case '/': {
                b /= a;
                str.pop();
                num.push(b);
                break;
            }
            case '^': {
                b = pow(b, a);
                str.pop();
                num.push(b);
                break;
            }
        }
    }
}