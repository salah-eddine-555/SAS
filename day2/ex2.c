#include<stdio.h>


int main() {

    int nombre, nb1, nb2, nombreInverse;

    printf("Enter les deux nombres \n: ");
    scanf("%d", &nombre);

    nb1 = nombre / 10;
    nb2 = nombre % 10;

    nombreInverse = nb2 * 10 + nb1;
   

    printf("l'inervese de cette  nombre  est : %d", nombreInverse);







}