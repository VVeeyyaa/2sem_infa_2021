#include <iostream>

int easy(int x){
    int count = 2;
    while(count <= x){
        if(x % count == 0){
            std::cout << count << std::endl;
            x /= count;
        } else {
            count++;
        }
    }
    return 0;
}

int main() {
    int x;
    std::cin >> x;
    easy(x);
    return 0;
}