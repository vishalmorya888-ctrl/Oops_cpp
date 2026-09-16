#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
    int employeeId;
    string name;
    double salary;
    
    public:
    Employee() : employeeId(0), name("Unknown"), salary(0.0) {}
    Employee(int id, const string& empName, double sal) : employeeId(id), name(empName), salary(sal) {}
    Employee(const Employee& other) : employeeId(other.employeeId), name(other.name), salary(other.salary) {}
    
    void display() const {
        cout << "ID: " << employeeId << " | Name: " << name << " | Salary: $" << salary << "\n";
    }
    void updateSalary(double newSalary){
        salary = newSalary;
    }
};

int main() {
	// your code goes here
	const Employee emp1(101, "Vishal", 80000.0);
	cout << "Const Employee Details: " << endl;
	emp1.display();
	
	Employee emp2 = emp1;
	cout << "\nCopied Employee Details (emp2):" << endl;
	emp2.display();
	
	emp2.updateSalary(90000.0);
	cout << "\nCopied Employee Details After Salary Update: " << endl;
	emp2.display();
	return 0;
}
