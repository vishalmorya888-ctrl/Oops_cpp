#include <bits/stdc++.h>
using namespace std;

class student{
    private:
    int rollNo;
    string name;
    double CGPA;
    
    public:
    class Address {
        private:
        string city;
        string state;
        
        public:
        Address(string city = "", string state = ""){
            this -> city = city;
            this -> state = state;
        }
        void displayAddress() const{
            cout << "Address: " << city << ", " << state;
        }
    };
    
    Address address;
    student(int rollNo, string name){
        this -> rollNo = rollNo;
        this -> name = name;
        this -> CGPA =0.0;
    }
    
    student(int rollNo, string name, double cgpa, string city = "N/A", string state = "N/A") : address(city, state){
        this -> rollNo = rollNo;
        this -> name = name;
        this -> CGPA = cgpa;
    }
    
    student() : rollNo(0), name(""), CGPA(0.0), address() {}
    
    void updateCGPA(double CGPA){
        this -> CGPA = CGPA;
    }
    
    void setAddress(string city, string state){
        this -> address = Address(city, state);
    }
    
    void displayInfo() const {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "CGPA    : " << CGPA << endl;
        address.displayAddress();
    }
};

int main() {
	// your code goes here
	student students[5] = {
        student(101, "Aarav Sharma", 8.5, "Delhi", "Delhi"),
        student(102, "Ananya Verma"),
        student(103, "Rohan Gupta", 9.1, "Mumbai", "Maharashtra"),
        student(104, "Priya Singh"),
        student(105, "Kabir Mehta", 7.8, "Bengaluru", "Karnataka")
    };
    
    students[1].setAddress("Jaipur", "Rajasthan");
    students[3].setAddress("Chandigarh", "Punjab");
    
    students[1].updateCGPA(8.9);
    students[3].updateCGPA(9.4);
    
    for (int i = 0; i < 5; ++i) {
        students[i].displayInfo();
        cout << endl << endl;
    }
    
    
    return 0;
}
