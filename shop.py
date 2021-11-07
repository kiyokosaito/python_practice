from dataclasses import dataclass
from typing import List
import csv

#dataclass
class Product:
    name:str
    price:float

#dataclass
class ProductStock:
    product :Product
    quantity: int

#dataclass
class Shop:
    cash:float
    stock:List[ProductStock]

#dataclass
class Customer:
    name:str
    budget:float
    shopping_list:List[ProductStock]

def create_and_stock_shop():
    s = Shop(200.0,[])
    with open('stock1.csv') as csv_file:
        csv_reader = csv.reader(csv_file,delimiter = ',')
        line_count=0
    # with open('stock1.csv') as csv_file:
    #     csv_reader = csv.reader(csv_file,delimiter = ',')
    #     line_count=0
        for row in csv_reader:
            p = Product(row[0], float(row[1]))
            ps = ProductStock(p, float(row[2]))
            s.stock.append(ps)
            #print(ps)
    return s

def print_product(p):
    print(f'\n PRODUCT NAME : {p.name} \nPRODUCT PRICE: {p.price}')

def print_customer(c):
    print(f'CUSTOMER NAME: {c.name} \nCUSTOMER BUDGET:{c.budget}')

    for item in c.shopping_list:
        print_product(item.product)

        print(f'{c.name} ODERS {item.quantity} OF ABOVE PRODUCT')
        cost = item.quantity *item.product.price
        print (f'The cost to{c.name} will be {cost} Euros')

def print_shop(s):
    print(f'Shop has {s.cash} in cash')
    for item in s.stock:
        print_product(item.product)
        print(f'The Shop has {item.quantity} of the above')

s = create_and_stock_shop()
print_shop(s)