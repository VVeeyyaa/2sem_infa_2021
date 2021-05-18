#include <iostream>

int main() {
    int a, b;
    int *one;
    int *two;
    std::cin >> a >> b;
    one = &a;
    two = &b;
    std::cout << do_some_awesome_work(one, two);
    return 0;
}
