#include <stdio.h>
int main(){
    printf("Entre com o tamanho da seq: ");
    int n;
    scanf("%d", &n);
    int i=0, soma = 0, maior = 0, menor = 0, igual = 0;
    while(i < n){
        printf("Entre com o proximo elemento da seq: ");
        int x;
        scanf("%d", &x);
        if(x < 0)menor++;
        else if(x > 0)maior++;
        else if(x == 0)igual++;
        i++;
    }
    printf("Numeros maiores que zero: %d\nmenores: %d\niguais:%d\n", maior, menor, igual);
}