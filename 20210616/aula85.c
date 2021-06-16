#include <stdio.h>

int soma(int v[], int n){
	int s = 0;
	for(int i = 0; i < n; ++i) s = s + v[i];
	return s;

}

int ocorrencias(int v[], int n, int x){
	int r = 0;
	for(int i = 0; i < n; i++){
        if (x == v[i]) r++;
    }
	return r;
}

int main(){
	int n;
	printf("Entre com o tamanho da sequencia (>= 1): ");
	scanf("%d", &n);
	int v[n];
	printf("Entre com um numero: ");
	int x = 0;
	scanf("%d", &x);
	for(int i = 0; i < n; ++i){
		printf("Entre com o proximo numero: ");
		scanf("%d", &v[i]);
	}
	printf("A soma vale: %d\n", soma(v, n));
	printf("O numero de ocorrencias e: %d\n", ocorrencias(v, n, x));
}