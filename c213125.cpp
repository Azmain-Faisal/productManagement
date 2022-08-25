#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class product
{
    public:
    string productID,productName,productCategory;
    void productReadData ()
    {
        ifstream INPUT ("productIN.txt");
        getline( INPUT,productID);
        getline( INPUT,productName);
        getline( INPUT,productCategory);
        INPUT.close();
    }
    void productWriteData ()
    {
        ofstream OUTPUT ("productOut.txt");
        OUTPUT << "Product Id:" << productID << endl;
        OUTPUT << "Product Category:" << productCategory << endl;
        OUTPUT << "Product Name:" << productName << endl;
        OUTPUT.close();
    }
};

class soldProduct : public product
{
    public:
    string customerID,customerPrice;
    void soldReadData ()
    {
        ifstream INPUT ("customerIN.txt");
        getline( INPUT,customerID);
        getline( INPUT,customerPrice);
        INPUT.close();
    }
     void customerWriteData ()
    {
        ofstream OUTPUT ("customerOut.txt");
        OUTPUT << "Customer Id:" << customerID << endl;
        OUTPUT << "Customer Price:" << customerPrice << endl;
        OUTPUT.close();
    }
};

class boughtProduct : public product
{
    public:
    string buyerID,buyerPrice,buyerName;
    void buyerReadData ()
    {
        ifstream INPUT ("buyerIN.txt");
        getline( INPUT,buyerID);
        getline( INPUT,buyerPrice);
        getline( INPUT,buyerName);
        INPUT.close();
    }
     void buyerWriteData ()
    {
        ofstream OUTPUT ("buyerOut.txt");
        OUTPUT << "Buyer Id:" << buyerID << endl;
        OUTPUT << "Buyer Price:" << buyerPrice << endl;
        OUTPUT << "Buyer Name:" << buyerName << endl;
        OUTPUT.close();
    }
};


int main()
{
    product chips ;
    chips.productReadData();
    chips.productWriteData();

    soldProduct rice;
    rice.soldReadData();
    rice.customerWriteData();

    boughtProduct ice;
    ice.buyerReadData();
    ice.buyerWriteData();

    return 0;
}