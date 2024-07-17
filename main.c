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
    int choice, productIndex, quantity, cartIndex;

    while (1) {
        printf("\n1. Display Products\n2. Add to Cart\n3. Remove from Cart\n4. View Cart\n5. Checkout\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayProducts();
                break;
            case 2:
                printf("Enter product number: ");
                scanf("%d", &productIndex);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                addToCart(productIndex - 1, quantity);
                break;
            case 3:
                printf("Enter cart item number: ");
                scanf("%d", &cartIndex);
                removeFromCart(cartIndex - 1);
                break;
            case 4:
                displayCart();
                break;
            case 5:
                checkout();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
}
}
