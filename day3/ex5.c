#include<stdio.h>
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00


int main(void){
    int i, low_rate, num_year, year, mounth;
    double value[5];


    printf("Taux d'interet de depart: ");
    scanf("%d", &low_rate);

    printf("Nombre d'annee : ");
    scanf("%d", &num_year);

    printf("\nAnnees");

    for(i = 0; i<NUM_RATES;i++){
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");

    for(year =1; year <= num_year; year++) {

        for(mounth = 1; mounth <=12; mounth++){
            for(i =0; i < NUM_RATES; i++){
                double mounth_rate = (low_rate + i)/100.0/12.0;
            }
            printf("%d ", mounth);

        }
        printf("%3d  ", year);
        for(i=0; i <NUM_RATES; i++){
            value[i]+=(low_rate + i)/100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;



}