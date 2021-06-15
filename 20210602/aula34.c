#include <stdio.h>

int main(){
    printf("Entre com o tamanho da seq: ");
    int n;
    scanf("%d", &n);
    int i=1;
    int par = 0, impar = 0;
    while (i < n){
        printf("Entre com o proximo elemento da seq: ");
        int x;
        scanf("%d", &x);
        if (x%2 == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }
        i = i + 1;
    }
    printf("impares %d e pares %d", impar, par);
}