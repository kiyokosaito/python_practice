#include <stdio.h>



struct Fruits{
    int apple;
    int orange;
    int banana;


};

void price (struct Fruits store1);

int main (void){
    struct Fruits store1 = {100, 200, 300};
    struct Fruits store2 = {200,400,700};
    struct Fruits store3;
    store3 = store1;
    // printf("Apple is %d\n", store3.apple);
    // printf("Orange is %d\n", store3.orange);
    // printf("banana is %d\n", store3.banana);
    // price(store1);




    return 0;
}

void price (struct Fruits store1){
    printf("apple price is %d\n", store1.apple);
    printf("orange price is %d\n", store1.orange);
    printf("banana price is %d\n", store1.banana);
    return ;
}