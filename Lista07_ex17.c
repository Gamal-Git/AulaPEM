#include <stdio.h>


void frac(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main(){

    float num, num_float;
    int num_int;

    printf("Valor do numero: ");
    scanf("%f", &num);

    frac(num, &num_int, &num_float);

    printf("Inteiro: %d\nFloat: %f", num_int, num_float);

    return 0;
}