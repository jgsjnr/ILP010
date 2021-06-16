#include <stdio.h>

// Escreva um programa que le um int n >= 0 e uma
// sequencia de n ints, e apos isso, le um int x,
// e determina o numero de ocorrencias de x na sequencia
// Por exemplo, se a sequencia é (4, 5, 2, 2, 1, 4, 2, 7)
// e x é 2, então há tres ocorrencias de x na seq
int main(){
    printf("Digite uma numero: ");
    int n = 0, r = 0;
    scanf_s("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++){
        printf("Entre com o proximo resultado: ");
        scanf_s("%d", &s[i]);
    }
    printf("Entre com o valor de x: ");
    int x;
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
        if (x == s[i]) r++;
    }
    printf("Quantidade de ocorrencias: %d\n", r);
}