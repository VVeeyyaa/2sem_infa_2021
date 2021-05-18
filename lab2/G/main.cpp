#include <iostream>

int easy(int x){
    int count = 2;
    while(2 * count <= x){
        if(x % count == 0){
            return 0;
        }
        count++;
    }
    return 1;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << easy(x);
    return 0;
}