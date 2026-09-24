#include <bits/stdc++.h>
using namespace std;

class Product {
    int productId;
    string productName;
    double price;

public:
    void inputDetails() {
        cout << "Enter ID, Name, Price: ";
        cin >> productId >> productName >> price;
    }
    double calculatePrice() {
        return price;
    }
    double calculatePrice(double discountPercent) {
        return price - (price * discountPercent / 100.0);
    }
    double calculatePrice(double discountPercent, double deliveryCharge) {
        return calculatePrice(discountPercent) + deliveryCharge;
    }
    void displayDetails() {
        cout << "\nID: " << productId 
             << "\nName: " << productName 
             << "\nOriginal Price: $" << calculatePrice()
             << "\nWith 10% Discount: $" << calculatePrice(10)
             << "\nWith Discount & $5 Delivery: $" << calculatePrice(10, 5) << "\n";
    }
};

int main() {
	// your code goes here
	int count;
    cout << "Enter number of products: ";
    cin >> count;

    Product* products = new Product[count];

    for (int i = 0; i < count; i++) {
        products[i].inputDetails();
    }

    cout << "\n--- Product List ---";
    for (int i = 0; i < count; i++) {
        products[i].displayDetails();
    }

    delete[] products;
    return 0;
}
