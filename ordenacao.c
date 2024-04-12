#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gera_vetor(int v[], int t, int l) {
    int i;
    for (i = 0; i < t; i++){
        v[i] = rand() % l;
    }
}

void mostra_vetor(int v[], int t, char *msg){
    int i;
    printf("\n%s\n", msg);
    for(i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void selection_sort(int v[], int t){
    int i, j, pos_menor, menor, aux;

    for(i = 0; i < t-1; i++){
        pos_menor = i;
        for(j = i+1; j < t; j++){
            if(v[j] < v[pos_menor]){
                pos_menor = j;
            }
        }
        aux = v[pos_menor];
        v[pos_menor] = v[i];
        v[i] = aux;
    }

}

void insertionsort (int v [], int n)
{
   for (int j = 1; j < n; ++j) {
        int x = v[j];
        int i;
        for (i = j-1; i >= 0 && v[i] > x; --i){
            v[i+1] = v[i];
        }
        v[i+1] = x;
   }
}

int main(){
    int t = 0, l;
    int *v;
    long ini, fim;

    srand(time(0));
    do{
        printf("Qual o tamanho do vetor? ");
        scanf("%d", &t);


        v = (int *) malloc (t * sizeof(int));

        printf("Qual o limite da geracao aleatoria? ");
        scanf("%d", &l);

        gera_vetor(v, t, l);
        // mostra_vetor(v, t, "Primeiro vetor gerado:");

        ini = time(0);
        selection_sort(v , t);
        fim = time(0);
        
        // mostra_vetor(v, t, "Vetor ordanado pelo Selection");
        printf("Selection demorou %lu segundos para o tamanho %d\n", fim-ini, t);

        gera_vetor(v, t, l);
        // mostra_vetor(v, t, "Segundo vetor gerado:");

        ini = time(0);
        insertionsort(v , t);
        fim = time(0);

        printf("Insection demorou %lu segundos para o tamanho %d\n", fim-ini, t);

        free(v);

    }while (t > 0);

    return 0;
}