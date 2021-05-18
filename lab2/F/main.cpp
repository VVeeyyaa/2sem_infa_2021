#include <iostream>

int main() {
    int x = 1, count = 0, k = 0;
    while(x != 0){
        if(x > count){
            count = x;
            k = 0;
        }
        if(x == count){
            k++;
        }
        std::cin >> x;
    }
    std::cout << k;
    return 0;
}