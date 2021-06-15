#include <stdio.h>
int main(){
    printf("Entre com o tamanho da seq: ");
    int n;
    scanf("%d", &n);

    printf("Entre com o primeiro elemento da seq: ");
    int maior;
    scanf("%d", &maior);

    int i=1;
    while (i < n){
        printf("Entre com o proximo elemento da seq: ");
        int x;
        scanf("%d", &x);
        if (x > maior) maior = x;
        i = i + 1;
    }
    printf("Um maior elemento da seq vale %d\n", maior);
}