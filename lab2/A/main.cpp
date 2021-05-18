#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if(a * b == 0){
        a = 0;
        b = 0;
    }
    while(a * b != 0) {
        if(a < b){
            a += b;
            b = a - b;
            a -= b;
        }
        a = a % b;
    }
    std::cout << a + b;
    return 0;
}
