#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    float price;
    int stock;
} Product;

typedef struct {
    char name[50];
    float price;
    int quantity;
} CartItem;

#define MAX_PRODUCTS 10
#define MAX_CART_ITEMS 10

Product products[MAX_PRODUCTS] = {
    {"Whey Protein", 29.99, 10},
    {"Casein Protein", 34.99, 5},
    {"Soy Protein", 24.99, 8},
    {"Pea Protein", 27.99, 7},
    {"Egg Protein", 31.99, 6}
};

CartItem cart[MAX_CART_ITEMS];
int cartSize = 0;

int main() {
  return 1;
}
