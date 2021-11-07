#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Product {
    char* name; 
    double price;
};

struct ProductStock{
    struct Product product;
    int quantity;

};

struct Shop{
    double cash ;
    struct ProductStock stock [20];
    int index;

};

struct Customer {
    char* name ;
    double budget;
    struct ProductStock shoppingList [10];
    int index;
};

void printProduct(struct Product p)
{
   
    printf("PRODUCT NAME: %s \nPRODUCT PRICE: %.2f\n", p.name, p.price);
    printf("--------------------\n");
}

void printCustomer(struct Customer c)
{
    
    printf("CUSTOMRT NAME: %s \nCUSTOMER BUDGET: %.2f\n", c.name, c.budget);
    printf("--------------------\n");
    for (int i = 0; i < c.index; i++)
    {
        printProduct(c.shoppingList[i].product);
        printf("%s ORDERS %d OF ABOVE PRODUCT\n", c.name, c.shoppingList[i].quantity);
        double cost = c.shoppingList[i].quantity * c.shoppingList[i].product.price;
        printf("The cost to %s will be %.2f EUROS\n", c.name, cost);
    }
}

struct Shop createAndStockShop()
{
    struct Shop shop = {200};
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("stock1.csv", "r");
    if (fp == NULL)
        exit (EXIT_FAILURE);
    
    while ((read = getline(&line, &len,fp)) != -1){
        // printf("Retrieved line of length %zu:\n",read);
        // printf("%s IS A LINE", line);
        char *n = strtok(line, ",");
        char *p = strtok(NULL, ",");
        char *q = strtok(NULL, ",");
        int quantity = atoi (q);
        double price = atof(p);
        char *name = malloc(sizeof(char) * 50);
        strcpy(name,n);
        struct Product product = { name, price};
        struct ProductStock stockItem = { product, quantity};
        shop.stock[shop.index++]= stockItem;
        // printf("NAME OF PRODUCT %s PRICE %.2f QUANTITY %d \n" , name, price, quantity);

    }
    // printProduct (shop.stock[0].product);

    return shop;

}

void printShop(struct Shop s)
{
    printf("Shop has %.2f in cash\n", s.cash);
    for (int i =0; i < s.index; i ++)
    {
        printProduct(s.stock[i].product);
        printf("THE SHOP HAS %d OF THE ABOVE\n", s.stock[i].quantity);
    }

}


int main (void)
{
//     struct Customer dominic = {"Dominic", 100.0};
    
//     struct Product coke = {"Can coke", 1.10};
//     struct Product bread = {"Bread", 0.7};
//     // printProduct(coke);
    
//     struct ProductStock cokeStock = {coke, 20};
//     struct ProductStock breadStock = {bread, 2};

//     dominic.shoppingList [dominic.index++]= cokeStock;
//     dominic.shoppingList [dominic.index++]= breadStock;

//     printCustomer(dominic);
//     // printf("The shop has %d of the product %s\n", cokeStock.quantity, cokeStock.product.name);
    
    struct Shop shop = createAndStockShop();
    printShop(shop);
    return 0;

}