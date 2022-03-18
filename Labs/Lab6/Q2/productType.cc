//Write a program that uses the class productType defined in Exercises 8 and 10 of chapter 10.
#include "productType.h"
#include <iostream>
using namespace std;
productType::productType()
{
    quantitiesInStock = 0;
    price = 0.0;
    discount = 0.0;
}
void productType::set(string name, string proId, string manu, int q, double p, double d)
{
    productName = name;
    id = proId;
    manufacturer = manu;
    quantitiesInStock = q;
    price = p;
    discount = d;
}
void productType::setQuantitiesInStock(int&x)
{
    if (x>0)
        x = x;
    else
        x = 0;
}
void productType::setPrice(double x)
{
    if (x>0)
        price = x;
}
void productType::setDiscount(double d)
{
    if (d>0)
        discount = d;
}
void productType::print() const
{
    cout << "product name is: " << productName <<endl;
    cout << "product id is: " << id <<endl;
    cout << "manufacturer is: " << manufacturer <<endl;
    cout << "quantities in stock: " << quantitiesInStock <<endl;
    cout << "price: " << price <<endl;
    cout << "discount: " << discount <<endl;

}
void productType::updateQuantitiesInStock(int x)
{
    quantitiesInStock+=x;
}
int productType::getQuantitiesInStock() const
{
    return quantitiesInStock;
}
double productType::getPrice() const
{
    return price;
}
double productType::getDiscount() const
{
    return discount;
}
