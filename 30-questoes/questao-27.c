#include <math.h>
#include <stdio.h>

// Números primos

int main(){
    unsigned int n;
    printf("Insira um número inteiro positivo para saber se ele é primo\n");
    scanf("%u", &n);
    if(n <= 1){
        return printf("Números menores ou iguais a 1 não são primos\n");
    }
    if(n == 2){
        return printf("2 é um número primo\n");
    }
    if(n % 2 == 0){
        return printf("%u não é um número primo\n", n);
    }
    unsigned int r = pow(n, 0.5);
    for(int i = 3; i <= r; i += 2){
        if(n % i == 0) return printf("%u não é um número primo\n", n);
    }
    printf("%u é um número primo\n", n);
    return 0;
}
