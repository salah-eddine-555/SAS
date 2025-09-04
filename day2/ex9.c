
#include<stdio.h>

 /*
    Écrivez un programme qui demande à l'utilisateur d'entrer un nombre n, puis
affiche tous les carrés pairs compris entre 1 et n. Par exemple, si l'utilisateur
entre 100, le programme devrait afficher :
4
16
36
64
100
 
 */

int main() {
    int i, n;

    printf("Veuilles saisir la valeur de n : ");
    scanf("%d", &n);

    for(i =2; i*i<= n; i+=2){

        printf("%d\n", i*i);
    }

    return 0;

}