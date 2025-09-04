#include<stdio.h>

int main(){

    int note;
    printf("Entrez le note : ");
    scanf("%d", &note);

    if(note > 100 && note < 0){
        printf("la note doit etre 1 et 100");
    }


    switch (note /10)
    {
    case 10:
    case 9:
        printf("le note litterale est A");
        break;
        
    case 8:
        printf("lre note litteral est B");
        break;
    case 7:
        printf("lre note litteral est C");
        break;
    
    case 6:
        printf("lE note litteral est D");
        break;
    
    default:
        printf("le note litteral est F");
        break;
    }
}