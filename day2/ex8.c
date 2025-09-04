#include<stdio.h>

/*
    réduit cette fraction à sa plus simple expression :
Entrez une fraction : 6/12
Sous sa forme la plus simple : 1/2
Indice : Pour réduire une fraction à sa plus simple expression, commencez par
calculer le GCD du numérateur et du dénominateur. Ensuite, divisez le numérateur
et le dénominateur par ce GCD.
*/

int main(){
    int m,n,r, num, denum;

    printf("entrez les deux nombres : \n");
    scanf("%d %d", &num, &denum);

   m = num;
   n = denum;


    while(n !=0 ){
        r = m % n;
        m = n;
        n = r;
    }

    
    int gcd= m;

    printf("Le grande divisuer en commun est %d", gcd);


        num = num / gcd;
        denum = denum / gcd;


    printf("le simple est %d / %d : ", num, denum);

    return 0;

    

}