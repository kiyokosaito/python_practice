#include <stdio.h>

typedef struct {
    int apple;
    int orange;
    int banana;


}Fruits;


int main (void){
    // typedef unsigned int seisu;
    // seisu number = 15;
    // printf("%d", number);
    Fruits store;
    store.apple = 100;
    printf("apple price is %d yen", store.apple);



    return 0;



}