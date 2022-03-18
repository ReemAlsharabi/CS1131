//Write a program that uses the class productType defined in Exercises 8 and 10 of chapter 10.
#include "productType.h"
#include <iostream>
using namespace std;
int main()
{
    productType product;

    product.set("Microwave", "M3562", "GeneralPool", 35, 175.00, 0.1);
    product.print();

    int q;
    cout << "Enter quantities in stock: ";
    cin >> q;
    product.updateQuantitiesInStock(q);

    cout << "updated quantities in stock: " << product.getQuantitiesInStock() <<endl;

    return 0;
}
