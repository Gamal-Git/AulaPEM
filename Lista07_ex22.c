#include <stdio.h>

void exclamacao(int x){
    int i, j;
    for(i = 1; i <= x; i++){
        for(j = 0; j < i; j++){
            printf("!");
        }
        printf("\n");
    }

}

int main(){
    int x;
    printf("Quantidade maxima de !: ");
    scanf("%d", &x);

    exclamacao(x);

    return 0;
}