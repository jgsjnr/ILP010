#include <stdio.h>

void print_array(int array[], int n){
    for(int i = 0; i < n; ++i) printf("%d\n", array[i]);
}

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 7};
    printf("endereco de v[0]: %p\n", v);
    print_array(v, 7);
}