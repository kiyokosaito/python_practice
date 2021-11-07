#include <stdio.h>

struct Test{
    char name [32];
    int kokugo;
    int sansu;
    int eigo;

    
};

struct Test student[3] = {
    {"Tarou", 40, 50, 60},
    {"Jiro",55,65,70},
    {"saburou", 70,80,90}
};

void show(void);
void line(void);

int main (void){
    printf("%10s %10s %10s %10s\n", "name","kokugo","sansu","eigo");
    line();
    show();
    line();



    return 0;
}

void line (void){
    int i;
    for (i =0; i<50; i++){
        printf("-");
    }
    printf("\n");
    return;
}

void show (void){
    int i;
    for (i=0; i<3; i++){
        printf("%8s %8d %8d %8d\n", 
        student[i].name, student[i].kokugo, student[i].sansu, student[1].eigo);
    }
    return;
}