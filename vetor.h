#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gera_vetor(int v[], int t, int l);

void mostra_vetor(int v[], int t, char *msg);

void selection_sort(int v[], int t);

void insertionsort (int v [], int n);

int busca_simples(int v[], int t, int x);
//devolve 1 se X pertence ao vetor ou 0 caso contrário

int busca_binaria(int v[], int t, int x);
//devolve Posição se X pertence ao vetor ou -1 caso contrário