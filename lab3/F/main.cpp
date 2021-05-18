int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new) {
    int *new_array = NULL;
    if(n_new > 0){
        new_array = new int[n_new];
    }
    if(source) {
        int i;
        for(i = 0; i < std::min(n_old, n_new); i++) {
            new_array[i] = source[i];
        }
        delete [] source;
    }
    return new_array;
}