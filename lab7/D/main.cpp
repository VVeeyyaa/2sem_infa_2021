#include <iostream>

struct News {
    bool istrue;

    News(bool istrue){
        this->istrue = istrue;
    }
};

class House {
public:
    std::string name;
    bool isknight;
    bool isalive = true;

    House(std::string name = "", bool isknight = true){
        this->name = name;
        this->isknight = isknight;
    }

    bool say(bool news, unsigned int *count){
        if(this->isknight){
            if(news == false){
                this->isalive = false;
                *count -= 1;
                return false;
            } else {
                return true;
            }
        }
        else {
            if(news == false){
                this->isknight = true;
                return true;
            } else {
                return false;
            }
        }
    }
};

int main() {
    unsigned int N, M;
    bool istrue;
    std::cin >> N >> istrue;
    unsigned int isalive_count = N;
    unsigned int *count = &isalive_count;
    House *houses = new House [N];
    News news = News(istrue);
    for(int i = 0; i < N; ++i){
        std::cin >> houses[i].name >> houses[i].isknight;
    }
    std::cin >> M;
    int idx = 0;
    for(int i = 0; i < M; ++i){
        while(!houses[idx].isalive && idx < N){
            idx++;
        }
        if(houses[idx].isalive && isalive_count != 1){
            news.istrue = houses[idx].say(news.istrue, count);
            idx++;
        }
        if(idx == N - 1){
            idx = 0;
        }
        if(isalive_count == 1){
            break;
        }
    }
    for(int i = 0; i < N; ++i) {
        if (houses[i].isalive) {
            std::cout << houses[i].name << " " << houses[i].isknight << "\n";
        }
    }
    return 0;
}