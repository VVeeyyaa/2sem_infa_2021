#include <iostream>

int main() {
    int x = 1, count = 0;
    while(x != 0){
        if(x % 2 == 0 && x > count){
            count = x;
        }
        std::cin >> x;
    }
    std::cout << count;
    return 0;
}