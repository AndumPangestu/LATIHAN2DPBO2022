#include <bits/stdc++.h>
#include "Product.cpp"

using namespace std;

class Hardware : public Product
{
private:
    string brand;
    string model;

public:
    Hardware()
    {
        this->brand = "-";
        this->model = "-";
    }

    Hardware(string brand, string model)
    {
        this->brand = brand;
        this->model = model;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    string getBrand()
    {
        return this->brand;
    }

    string getModel()
    {
        return this->model;
    }

    ~Hardware(){};
};
