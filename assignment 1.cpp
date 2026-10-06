
#include <iostream>
using namespace std;

int main()
{
    string customerName;
    string phoneModel;
    int quantityPurchased;
    double pricePerPhone;
    double totalSales;

    cout << "Customer name: ";
    cin >> customerName;

    cout << "Phone model purchased: ";
    cin >> phoneModel;

    cout << "Quantity purchased: ";
    cin >> quantityPurchased;

    cout << "Price per phone: ";
    cin >> pricePerPhone;

    totalSales = quantityPurchased * pricePerPhone;

    cout << "\nSales Receipt" << endl;
    cout << "==============" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "Phone: " << phoneModel << endl;
    cout << "Quantity: " << quantityPurchased << endl;
    cout << "Price per phone: " << pricePerPhone << endl;
    cout << "Total sales: " << totalSales << endl;
    cout << "==============" << endl;

    return 0;
}
    