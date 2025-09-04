#include <stdio.h>

int main(){

    int m,n,r;

    printf("entrez les deux nombres : \n");
    scanf("%d %d", &m, &n);


    while(n !=0 ){
        r = m % n;
        m = n;
        n = r;
    }

    printf("Le grande divisuer en commun est %d", m);
}