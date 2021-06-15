#include <stdio.h>

int funa(int n){
    int k = 0, kxk = 0;
    while(kxk <= n){
        k++;
        kxk = k*k;
    }
    return k-1;
}

int funb(int n){
    int j = 0, s = 0;
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf_s("%d", &j);
        s = s + funa(j);
    }
    return s;
}

int main(){
    printf("Digite o tamanho da seq: ");
    int n = 0;
    scanf_s("%d", &n);
    printf("A soma das raizes reais e: %d\n",funb(n));
}