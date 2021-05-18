#include <iostream>

int main() {
    unsigned int a, b, c, d, x, mark = 2;
    std::cin >> a >> b >> c >> d >> x;
    bool plus = a + x == b, mult = c * x == d;
    if(plus && mult) {
        mark = 5;
    } else if(plus || mult) {
        mark = 4;
    } else if(x == 1024) {
        mark = 3;
    }
    std::cout << mark;
    return 0;
}