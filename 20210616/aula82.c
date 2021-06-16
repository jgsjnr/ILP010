#include <stdio.h>

int main(){
    int faces[7] = {0};
    printf("Entre com o primeiro resultado: ");
    int f;
    scanf_s("%d", &f);
    while (f){
        ++faces[0];
        ++faces[f];
        printf("Entre com o proximo resultado: ");
        scanf_s("%d", &f);
    }
    printf("Total de lancamentos: %d\n", faces[0]);
    for (int i = 1; i < 7; i++){
        printf("face %d: %d\n", i, faces[i]);
    }  
}