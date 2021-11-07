#include<stdio.h>
#include<string.h>
int main()
{
    char* name;

    printf("What is your name?");
    // fgets(name,20,stdin);

    gets(name)

    if (strcmp(name, "Alice")==0)
    {
        printf("Hello, %s\n", name);
    } else
    {
        printf("Hello lowly peasant!");
    }

    return 0;

}