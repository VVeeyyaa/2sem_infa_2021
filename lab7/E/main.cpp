#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int **matrix = new int* [N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new int[N];
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << matrix[N-j-1][i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}