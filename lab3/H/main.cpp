Cat* get_home_for_a_cats_pride(unsigned int n) {
    int i;
    Cat* cat = new Cat[n];
    for (i = 0; i < n; i++) {
        cat[i].name = new char[10];
    }
    return cat;
}

void clear_home_of_a_cats_pride(Cat *cats, unsigned int n){
    int i;
    for (i = 0; i < n; i++) {
        delete [] cats[i].name;
    }
    delete [] cats;
}
