#include <iostream>

int main() {
    int x, count = 2;
    std::cin >> x;
    while(count < x){
        count *= 2;
    }
    if(count == x){
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}