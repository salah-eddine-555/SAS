#include<stdio.h>

int main(){
    int m1, j1, a1;
    int m2, j2, a2;

    printf("Entre le date 1 (mm/jj/aa): \n" );
    scanf("%d/%d/%d", &m1, &j1, &a1);

    printf("Entre le date 2  (mm/jj/aa): \n" );
    scanf("%d.%d/%d", &m2, &j2, &a2);

    if(a1 < a2){
        printf("%d/%d/%02d est plsu tot que%d/%d/%02d \n",
         m1, j1, a1, m2, j2, a2);
    }
    else if(a2<a1){
       printf("%d/%d/%02d est plsu tot que %d/%d/%02d \n",
         m2, j2, a2, m1, j1, a1);
    }
    else if(m1 < m2){
         printf("%d/%d/%02d est plus tot que %d/%d/%02d\n",
               m2, j2, a2, m1, j1, a1);
    } 
    else if(m2 < m1) {
         printf("%d/%d/%02d est plus tot que %d/%d/%02d\n",
               m2, j2, a2, m1, j1, a1);
    }
    else if( j1 < j2){
        printf("%d/%d/%02d est plus tot que %d/%d/%02d\n",
               m1, j1, a1, m2, j2, a2);
    }
    else if( j2 < j1){
        printf("%d/%d/%02d est plus tot que %d/%d/%02d\n",
            m2, j2, a2, m1, j1, a1);
    } else {
        printf("les date sont identiques");
    }

}