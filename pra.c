#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void keisan(int x, int y, int *a1, int *a2);

int main (void)
{   
    // int array [5]= {12,13,14};
    // int i;
    // for (i=0; i < sizeof(array) / sizeof(array[0]); i++){
    //     printf("%d th %d\n",i , array[i]);
    // }

    // char c = 'A';
    // printf("%c", c);

    // char str [5] = {'J','H','O','N', '\0'};
    // printf("%s\n", str);
    // char str2 [] = "JOHN";
    // printf("%s\n", str2);

    // char str [] = "2.56";
    // double suuti = atoi (str);
    // printf("%f", suuti);

    // char str [10];
    // strcpy(str, "Mike");
    // printf("%s", str);

    // char str1 [15] = "Star";
    // char str2 [] = "Wars";
    // strcat (str1, str2);
    // printf("%s", str1);

    // char str [20];
    // char str1 [] = "Star";
    // char str2 [] = "Wars";
    // int i =3;
    // sprintf(str,"%s%s%d", str1,str2,i);
    // printf("%s",str);

// this is how to count the charactoers by user input with strlen 
    // char str[256];
    // scanf("%s", str);
    // int i ;
    // i = strlen(str);
    // printf("%d",i);

    // int apple = 10;
    // int *bay;
    // bay = &apple;
    // printf("%d\n", apple);
    // printf("%d\n",*bay);

// this shows that pointer and the original data shares the same place/address
    // int apple, *bay;
    // bay = &apple;
    // printf("%p\n", &apple);
    // printf("%p\n", bay);

    // int *apple, orange;
    // apple = &orange;
    // printf("%p\n", &orange);
    // printf("%p\n", apple);

    // int *p, i;
    // p = &i;
    // *p = 15;
    // printf("%d\n", *p);
    // printf("%d\n", i);

    int tasizan;
    int hikizan;
    keisan (30, 10, &tasizan, &hikizan);
    printf("%d\n", tasizan);
    printf("%d\n", hikizan);

    

    return 0;
}    

void keisan(int x, int y, int *a1, int *a2){
    *a1 = x+y;
    *a2 = x-y;


}
