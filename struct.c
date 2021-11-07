#include <stdio.h>

struct Student{
    int year;
    char name[64];
    double weight;
    double height;
}Tarou, Hanako;



int main (void){
    
    // struct Student Tarou = {10, "Tarou Kuroki", 80, 179};
    // printStudent(Tarou);
    
    // struct Student Tarou;
    Tarou.year=10;
    Hanako.year =20;
    printf("Tarou's age is %d\n", Tarou.year);
    printf("Hanako's age is %d\n", Hanako.year);
    // Tarou.name = Kuroki;
    // Tarou.weight = 80;
    // Tarou.height = 179;
    // printf("%d\n", Tarou. year, Tarou.name, Tarou.weight, Tarou.height);
    return 0;


    
}