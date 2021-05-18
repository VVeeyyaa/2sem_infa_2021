int* now_get_me_some_bytes(unsigned int n){
    int *arr = new int[n];
    return arr;
}

void now_free_some_bytes(int* p) {
    delete [] p;
}