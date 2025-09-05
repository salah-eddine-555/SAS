#include<stdio.h>
#define N 10

int main(void){
    int a[N], i;

    printf("Entrez %d nombres : ", N);
    for(int i=0; i< sizeof(a)/sizeof(a[0]); i++){
        scanf("%d", &a[i]);
    }

    printf("dans l'order inverse : ");
    for(int i= N; i >=0; i--){
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;

}