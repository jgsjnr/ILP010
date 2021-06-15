#include <stdio.h>

int pot(int x, int n){
    int p = 1;
    for(int i = 0; i < n; ++i){
        p *= x;
    }
    return p;
}

double potd(double x, int n){
    double p = 1;
    for(int i = 0; i < n; ++i){
        p *= x;
    }
    return p;
}

int fib(int n){
    int x = 0, y = 1;
    for(int i = 0; i < n; ++i){
        int z = x + y;
        x = y;
        y = z;
    }
    return x;
}

int main(){
    printf("Digite um numero para a sequencia: ");
    int n;
    scanf_s("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}