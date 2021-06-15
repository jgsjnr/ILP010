#include <stdio.h>

int funa(int n){
    int s = 0;
    if(n == 0) printf("O numero precisa ser maior ou igual a um!\n");
    else{
        for(int i = 1; i <= n; i++){
            printf("Digite o proximo numero da seq: ");
            int j = 0;
            scanf_s("%d", &j);
            if(j == n) s = s+1;
        }
    }
    return s;
}

int main(){
    printf("Digite o tamanho da seq: ");
    int n = 0;
    scanf_s("%d", &n);
    printf("O maximo de ocorrencias: %d\n",funa(n));
}