#include <iostream>
#include <stack>
#include <cstdlib>

int main() {
    std::stack <long long> a;
    std::string s;
    long long x, y, z;
    while (std::cin >> s) {
        if (s == "+" || s == "-" || s == "*" || s == "/") {
            y = a.top();
            a.pop();
            z = a.top();
            a.pop();
            if (s == "+") {
                y += z;
                a.push(y);
            }
            if (s == "-") {
                z -= y;
                a.push(z);
            }
            if (s == "*") {
                y *= z;
                a.push(y);
            }
            if (s == "/") {
                z /= y;
                a.push(z);
            }

        }
        else {
            x = atoi(s.c_str());;
            a.push(x);
        }

    }
    std::cout << a.top() << '\n';
    return 0;
}