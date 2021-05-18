#include <iostream>
#include <string>

int pay(int x, std::string num){
    int sum = 0;
    if(x <= 60){
        return 0;
    } else if (num[1] == num[2] && num[1] == num[3]) {
        sum += 1000;
    } else if (num[1] != num[2] && num[1] != num[3] && num[2] != num[3]) {
        sum += 100;
    } else {
        sum += 500;
    }
    return sum;
}

int main() {
    int x = 0, sum = 0;
    std::string num = "A000AA";
    while (num != "A999AA") {
        sum += pay(x, num);
        std::cin >> x >> num;
    }
    std::cout << sum;
    return 0;
}