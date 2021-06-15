#include <stdio.h>

// Escreva um programa que le um int n >= 0
// e uma sequencia de n ints e determina
// se a soma dos pares é maior que a soma dos 
// impares da sequencia. Por exemplo,
// para a sequencia 2, 5, 1, 6, 3, 5, a soma
// dos pares vale 2 + 6 + 4 = 12. e a soma
// dos impares vale 5 + 1 + 3 = 9. Logo
// a soma dos pares é amior que a dos impares
int main(){
    printf("Entre com o tamanho da seq: ");
    int n;
    scanf_s("%d", &n);
    int i=0, somapar = 0, somaimpar = 0;
    while(i < n){
        printf("Entre com o proximo elemento da seq: ");
        int x;
        scanf_s("%d", &x);
        if(x%2 == 0)somapar = somapar + x;
        else somaimpar = somaimpar + x;
        i++;
    }
    if(somapar >= somaimpar){
        printf("A soma dos pares e maior ou igual que a soma dos impares\n");
    }
    else{
        printf("A soma dos pares e menor que impares\n");
    }
    printf("O resultado da soma dos impares: %d\n", somaimpar);
    printf("O resultado da soma dos pares: %d\n", somapar);
}