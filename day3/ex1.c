#include<stdbool.h>
#include<stdio.h>

int main(){
    bool digit_seen[10] = {false};
    bool dupilcated_tab [10]= {false};
    int digit, i;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);

    while( n > 0) {
        digit = n % 10;
        if(digit_seen[digit])
            dupilcated_tab[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("les nombres dupliquee \n");
    

    for(i =0; i<10; i++){
        if(dupilcated_tab[i])
            printf("%d \t", i);
        }
}


