#include <stdio.h>

//recebe um int n >= 0 e devolve n!
int fatint(int n){
    int fat = 1;
    for(int i = 1; i <= n; ++i){
        fat = fat * i;
        printf("valor do fatorial : %d\n", fat);
    }
    return fat;
}

long fatlong(int n){
    long fat = 1;
    for(int i = 1; i <= n; ++i){
        fat = fat * i;
    }
    return fat;
}

int main(){
    printf("Digite um numero: ");
    int n;
    scanf_s("%d", &n);
    fatint(n);
    for (int i = 0; i < 50; ++i){
        printf("fat %d = %ld \n", i, fatlong(i));
    }
}