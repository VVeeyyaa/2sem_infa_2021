#include <iostream>
#include <cmath>

int main() {
    unsigned int N = 0;
    float x, M_x, D_x, sum = 0, sum_square = 0;
    std::cin >> x;
    while(x != 0) {
        N++;
        sum += x;
        sum_square += x*x;
        std::cin >> x;
    }
    M_x = round(1000 * sum / N) / 1000;
    D_x = round(1000 * (sum_square / N - M_x * M_x)) / 1000;
    if(M_x == int(M_x) && D_x == int(D_x)) std::cout << M_x << ".0 " << D_x << ".0";
    else if(M_x == int(M_x)) std::cout << M_x << ".0 " << D_x;
    else if(D_x == int(D_x)) std::cout << M_x << " " << D_x << ".0";
    else std::cout << M_x << " " << D_x;
    return 0;
}