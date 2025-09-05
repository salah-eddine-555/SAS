#include<stdio.h>

int main() {
    int tab[5][5];
    int tab_ligne [5]= {0};
    int tab_colonne [5]= {5};
    int i, j;

    for(i = 0; i < 5; i++){
        printf("Entrez la ligne %d :", i+1); 
        for(j=0; j <5; j++){

            scanf("%d", &tab[i][j]);
            tab_ligne[i] += tab[i][j];

            tab_colonne[j] += tab[i][j];
        }
    }

    printf("Totaux des lignes : \t");
    for(int i =0 ; i<5;i++){
        printf("%d", tab_ligne[i]);
    }
    printf("\n");

    printf("Totauz des colonnes : \t");
     for(int i =0 ; i<5;i++){
        printf("%d", tab_colonne[i]);
    }

    return 0;


}