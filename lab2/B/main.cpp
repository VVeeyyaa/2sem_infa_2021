#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if(x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) {
        std::cout << "YES";
    }else{
        std::cout << "NO";
    }
    return 0;
}