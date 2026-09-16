#include <bits/stdc++.h>
using namespace std;

class Product{
    private:
    int ProductId;
    string name;
    int price;
    
    public:
    Product(int id,string n, int p) : ProductId(id), name(n), price(p) {} 
    
    Product comparePrice(const Product& other) const{
        if(this -> price >= other.price){
            return *this;
        }
        return other;
    }
    
    void display() const{
        cout << "Product ID: " << ProductId << "\n";
        cout << "Name      : " << name << "\n";
        cout << "Price     : $" << price << "\n";
    }
};

int main() {
	// your code goes here
	Product p1(101, "Mechanical Keyboard", 120);
    Product p2(102, "Gaming Mouse", 85);
    
    Product expensiveProduct = p1.comparePrice(p2);
    expensiveProduct.display();
    return 0;
}
