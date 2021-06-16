#include <stdio.h>

int main(){
    int face1 = 0, face2 = 0, face3 = 0, face4 = 0, face5 = 0, face6 = 0;
    int f;
    printf("Entre com o primeiro resultado do lancamento: ");
    scanf_s("%d",&f);
    while(f){
        switch (f)
        {
        case 1: ++face1; break;
        case 2: ++face1; break;
        case 3: ++face1; break;
        case 4: ++face1; break;
        case 5: ++face1; break;
        case 6: ++face1; break;
        }
        printf("Entre com o proximo resultado: ");
        scanf_s("%d", &f);
    }
    printf("face 1: %d\n", face1);
    printf("face 1: %d\n", face2);
    printf("face 1: %d\n", face3);
    printf("face 1: %d\n", face4);
    printf("face 1: %d\n", face5);
    printf("face 1: %d\n", face6);
}