#include <iostream>

int first_numeral(int x){
    int first = x;
    while(x / 10 != 0){
        x /= 10;
        first = x;
    }
    return first;
}

bool number_isgood_check(int x){
    bool result = true;
    int first_numeral_x = first_numeral(x);
    if(x % 4 == 0 && first_numeral_x != 4 && first_numeral_x != 5) {
        result = false;
    } else if(x % 7 == 0 && first_numeral_x != 7 && first_numeral_x != 1) {
        result = false;
    } else if(x % 9 == 0 && first_numeral_x != 9 && first_numeral_x != 8) {
        result = false;
    }
    return result;
}

int main() {
    unsigned int N, a, b, c, d, x, mark = 2;
    std::cin >> N;
    bool have_bad_numbers = false;
    for(int i = 0; i < N; i++){
        std::cin >> x;
        if(!number_isgood_check(x)) {
            std::cout << x << "\n";
            have_bad_numbers = true;
        }
    }
    if(!have_bad_numbers){
        std::cout << 0;
    }
    return 0;
}