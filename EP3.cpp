#include <bits/stdc++.h>
using namespace std;


class Employee{
    private:
    int empID;
    string name;
    double salary;
    
    public:
    void input();
    void display();
    
};

void Employee::input(){
    cin >> empID;
    getline(cin ,name);
    cin >> salary;
}

void Employee::display(){
    cout << "Employee Id. : " << empID << endl;
    cout << "Name : " << name << endl;
    cout << "salary : " << salary << endl;
}
int main() {
	// your code goes here
	Employee e;
	e.input();
	e.display();
}
