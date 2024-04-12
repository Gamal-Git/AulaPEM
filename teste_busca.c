#include "vetor.h"

int main(){
    int *v;
    int t, l, x;

    printf("Tamanho do vetor: ");
    scanf("%d", &t);
    v = (int *) malloc (t * sizeof(int));

    printf("Limite da geracao aleatoria: ");
    scanf("%d", &l);

    gera_vetor(v, t, l);

    mostra_vetor(v, t, "Vetor gerado");

    printf("Digite o valor para busca: ");
    scanf("%d", &x);

    if(busca_simples(v, t, x)){
        printf("\nO valor %d foi achado!!\n", x);
    }else{
        printf("\nO valor %d nao foi encontrado :(\n", x);
    }

    insertionsort(v, t);
    mostra_vetor(v, t, "Vetor ordanado");

    int pos = busca_binaria(v, t, x);

    if(pos != -1){
        printf("\nA posicao do valor %d eh %d", x, pos);
    }else{
        printf("\nO elemento %d nao esta contido no vetor\n", x);
    }

    return 0;
}