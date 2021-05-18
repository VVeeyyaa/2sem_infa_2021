#include<iostream>

struct Node {
    int element;
    Node *prev;
};

struct Stack {
    int deep;
    Node *head;
};

Stack* new_stack(){
    Stack *st = new Stack;
    st->head = new Node;
    st->head->element = -1;
    st->head->prev = NULL;
    st->deep = 0;
    return st;
}

void delete_head(Stack *st){
    st->head = st->head->prev;
    st->deep--;
}

void new_head(Stack* st, int x) {
    Node* new_head = new Node;
    new_head->element = x;
    new_head->prev = st->head;
    st->head = new_head;
    st->deep++;
}

int main() {
    int x;
    Stack* st = new_stack();
    std::cin >> x;
    while (x!=0) {
        if (x>0) {
            new_head(st, x);
        }
        else {
            if (st->deep){
                if (-x < st->head->element) st->head->element += x;
                else delete_head(st);
            }
        }
        std::cin >> x;
    }
    std::cout << st->deep << " " << st->head->element;
    return 0;
}



