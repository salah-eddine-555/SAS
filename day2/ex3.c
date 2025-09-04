#include<stdio.h>

int main() {

    int heur, minute;

    printf("Entrez l heur 24h : ");
    scanf("%d:%d", &heur,&minute);

    int time = heur *60 +minute;

    int time1 = (8 * 60 + 9*60 +43)/2;
    int time2 = (9*60 +43 + 11*60+19)/2;
    int time3 = (11*60+19 + 12 * 60 + 47)/2;
    int time4 = (12 * 60 + 47 + 2*60)/2;
    int time5 = (2*60 + 3 * 60 + 45)/2;
    int time6 = (3 * 60 + 45 + 7*60)/2;
    int time7 = (7*60 + 45 + 9*60 + 45)/2;

    if(time < time1){
        printf("heur de depart plus proch  est 8:00 est arrive a 10h16");
    }
    else if(time > time1){
        printf("heur de depart plus proch  est 9:43 est arrive a 11h52");
    }
    else if(time < time2){
        printf("heur de depart plus proch  est 9:43 est arrive a 9h43");
    }
    else if(time > time2){
        printf("heur de depart plus proch  est 11:19 est arrive a 1h31");
    }
    else if(time < time3){
        printf("heur de depart plus proch  est 11:19 est arrive a 1h31");
    }
    else if(time > time3){
        printf("heur de depart plus proch  est 12:47 est arrive a 1h31");
    }
    else if(time < time4){
        printf("heur de depart plus proch  est 12:47 est arrive a 1h31");
    }
    else if(time > time4){
        printf("heur de depart plus proch  est 2:00 est arrive a 4h08");
    }
    else if(time < time5){
        printf("heur de depart plus proch  est 2:00 est arrive a  4h08");
    }
    else if(time > time5){
        printf("heur de depart plus proch  est 3:45 est arrive a 5h55");
    }
    else if(time < time6){
        printf("heur de depart plus proch  est 3:45 est arrive a  3:45");
    }
    else if(time > time6){
        printf("heur de depart plus proch  est 7:00 est arrive a 9h20");
    }
    else if(time < time7){
        printf("heur de depart plus proch  est 7:00 est arrive a  9h20");
    }
    else if(time > time7){
        printf("heur de depart plus proch  est 7:00 est arrive a 9h45");
    }else {

        printf("heur de depart plus proch  est 7:00 est arrive a 9h45");
    }

    return 0;
 
}