#include <iostream>

struct Field {
    int columns, strings;
    int bombs_quantity;
    int **this_field;
    int **where_bombs;

    void generate_field() {
        int number_of_column, i;
        this_field = new int *[this->columns];
        where_bombs = new int *[this->bombs_quantity];
        //generate field
        for(number_of_column = 0; number_of_column < columns; number_of_column++){
            this_field[number_of_column] = new int [this->strings];
            for(i = 0; i < strings; i++) {
                this_field[number_of_column][i] = 0;
            }
        }
        //generate bombs array
        for(i = 0; i < bombs_quantity; i++){
            where_bombs[i] = new int [2];
        }
    }

    void set_bombs() {
        //set bombs on the field
        int i;
        for(i = 0; i < bombs_quantity; i++){
            std::cin >> where_bombs[i][0] >> where_bombs[i][1];
            this_field[where_bombs[i][0] - 1][where_bombs[i][1] - 1] = -1;
        }
        count_neighbors();
    }

    void count_neighbors() {
        int i, j;
        for (i = 0; i < columns; i++) {
            for (j = 0; j < strings; j++) {
                if(this_field[i][j] != -1) {
                    if (i > 0 && j > 0) {
                        if (this_field[i - 1][j - 1] == -1) {
                            this_field[i][j]++;
                        }
                    }
                    if (i > 0) {
                        if (this_field[i - 1][j] == -1) {
                            this_field[i][j]++;
                        }
                    }
                    if (j > 0) {
                        if (this_field[i][j - 1] == -1) {
                            this_field[i][j]++;
                        }
                    }
                    if (i < columns - 1 && j > 0) {
                        if (this_field[i + 1][j - 1] == -1) {
                            this_field[i][j]++;
                        }
                    }
                    if (i < columns - 1) {
                        if (this_field[i + 1][j] == -1) {
                            this_field[i][j]++;
                        }
                    }
                    if (i < columns - 1 && j < strings - 1) {
                        if (this_field[i + 1][j + 1] == -1) {
                            this_field[i][j]++;
                        }
                    }
                    if (j < strings - 1) {
                        if (this_field[i][j + 1] == -1) {
                            this_field[i][j]++;
                        }
                    }
                    if (i > 0 && j < strings - 1) {
                        if (this_field[i - 1][j + 1] == -1) {
                            this_field[i][j]++;
                        }
                    }
                }
            }
        }
    }

    void show_field() {
        int i, j;
        for(i = 0; i < columns; i++){
            for(j = 0; j < strings; j++) {
                std::cout << this_field[i][j] << ' ';
            }
            std::cout << std::endl;
        }
    }

    ~Field(){
        for (int i = 0; i < this->columns; i++) {
            delete [] this->this_field[i];
        }
        for (int i = 0; i < this->bombs_quantity; i++) {
            delete[] this->where_bombs[i];
        }
        delete[] this->this_field;
        delete[] this->where_bombs;
    }

    Field(int columns, int strings, int bombs_quantity){
        this->columns = columns;
        this->strings = strings;
        this->bombs_quantity = bombs_quantity;
    }
};

int main() {
    int columns, strings, bombs_quantity, i;
    std::cin >> columns >> strings >> bombs_quantity;
    Field *bombs_field = new Field(columns, strings, bombs_quantity);
    bombs_field->generate_field();
    bombs_field->set_bombs();
    bombs_field->show_field();
    delete(bombs_field);
    return 0;
}