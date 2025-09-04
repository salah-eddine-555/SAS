#include<stdio.h>


int main() {
    int ISBN, GS1,Identifiant,code,Numero, chiffreControle;
    

    printf("Enter ISBN \n");
    scanf("%d-%d-%d-%d-%d", &GS1, &Identifiant, &code, &Numero, &chiffreControle);


    printf("GS1 %d\n", GS1);
    printf("Identifiant %d\n", Identifiant);
    printf("code %d\n", code);
    printf("Numero %d\n", Numero);
    printf("chiffreControle %d\n", chiffreControle);

    return 0;



}