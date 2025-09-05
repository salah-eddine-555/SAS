#include<stdio.h>

int main(){

    int dupliquee[10] = {0};
    long n;
    int digit;


    printf("Veuillez saisie les nombres ");
    scanf("%ld", &n);

    while(n>0){
        digit = n % 10;
        dupliquee[digit]++;
        n /=10;
    }

    printf("les chiffre \n");
    for(int i =0; i <10; i++){
        printf("%d", i);
    }

    printf("Les OCcournces /t:");
    for(int i = 0; i < 10; i++){
        printf("%d", dupliquee[i]);
    }

}