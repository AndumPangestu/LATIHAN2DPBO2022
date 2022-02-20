#include <bits/stdc++.h>

using namespace std;

class Product
{
private:
    int price;
    string idProduct;

public:
    Product()
    {
        this->idProduct = "-";
    }

    Product(int price, string idProduct)
    {
        this->price = price;
        this->idProduct = idProduct;
    }

    void setPrice(int price)
    {
        this->price = price;
    }

    void setIdProduct(string idProduct)
    {
        this->idProduct = idProduct;
    }

    int getPrice()
    {
        return this->price;
    }

    string getIdProduct()
    {
        return this->idProduct;
    }

    ~Product(){};
};
