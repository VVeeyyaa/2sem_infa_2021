#include <iostream>
#include <string>

int vavil(int x, std::string num){
    int i, a;
    a = x%60;
    if(a != 0){
        for(i = 0; i < a%10 ; i++){
            num = "v" + num;
        }
        for(i = 0; i < a/10 ; i++){
            num = "<" + num;
        }
    }
    if(x/60 == 0)   {
        std::cout << num;
    } else {
        num = "." + num;
        vavil(x/60, num);
    }
    return 0;
}

int main() {
    int x = 0;
    std::cin >> x;
    vavil(x, "");
    return 0;
}
