#include <bits/stdc++.h>
using namespace std;

class student{
    private:
    int rollnumber;
    string name;
    float marks;
    
    public:
    void input(){
        cin >> rollnumber;
        getline(cin,name);
        cin >> marks;
    }
    void display(){
        cout << "Roll Number : " << rollnumber << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main() {
	// your code goes here
	student s;
	s.input();
	s.display();
	return 0;
}
