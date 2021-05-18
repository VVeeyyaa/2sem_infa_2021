#include <iostream>
#include <vector>

int main() {
    int avarage, length, i, element, summa = 0;
    std::cin >> length;
    std::vector<int> sum(length);
    for(i = 0; i < length; i++){
        std::cin >> element;
        sum[i] = element;
        summa += element;
    }
    avarage = summa / length;
    summa = 0;
    for(i = 0; i < length; i++){
        if(sum[i] > avarage) {
            summa += sum[i];
        }
    }
    std::cout << summa;
    return 0;
}