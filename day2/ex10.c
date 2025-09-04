#include <stdio.h>
#include <string.h>

int main(void) {
    char phone[9];
    int i;

    /*
    Écrivez un programme qui traduit un numéro de téléphone alphabétique en sa
    forme numérique :
    Entrez un numéro de téléphone : CALLATT
    2255288
    (Si vous n'avez pas de téléphone à portée de main, voici la correspondance des lettres
    sur les touches : 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV,
    9=WXY). Si le numéro de téléphone original contient des caractères non
    alphabétiques (chiffres ou ponctuation, par exemple), laissez-les inchangés
    
    */
 

    printf("Enterz un numero de tlephone : ");
    scanf("%s", phone);

    for(i = 0; i < strlen(phone); i++){

        char c = phone[i];


        if(c >= 'A' && c <= 'C'){
            printf("2");
        }else if(c <= 'D' && c <= 'F'){
            printf("3");
        }
        else if(c >= 'G' && c <= 'I'){
            printf("4");
        }
        else if(c >= 'J' && c <= 'L'){
            printf("5");
        }
        else if(c >= 'M' && c <= 'O'){
            printf("6");
        }
        else if(c >= 'P' && c <= 'S'){
            printf("7");
        }
        else if(c >= 'T' && c <= 'V'){
            printf("8");
        }
        else if(c >= 'W' && c <= 'Y')
        {
            printf("9");
        }else{
            printf("%c", c);
        }
    }
    printf("\n");

    
    return 0;

      
}
