#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Entre com o tamanho da seq: ");
    int n;
    scanf("%d", &n);
    int i=0, soma = 0;
    while(i < n){
        printf("Entre com o proximo elemento da seq: ");
        int x;
        scanf("%d", &x);
        soma = soma + abs(x);
        i++;
    }
    printf("O resultado absoluto: %d", soma);
}