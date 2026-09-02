#include <bits/stdc++.h>
using namespace std;

class student{
    public :
    int name;
    int RollNum;
    int ContactDet;
    int Marks;
    void input(){
        cout << "Enter your Name : \n";
        cin >> name;
        cout << "Enter your Roll Number : \n";
        cin >> RollNum;
        cout << "Enter your Contact Details : \n";
        cin >> ContactDet;
        cout << "Enter your Marks : \n";
        cin >> Marks;
    }
    void display(){
        cout << name << "  ";
        cout << RollNum << "  ";
        cout << ContactDet << "  ";
    }
    string Gradedisplay(){
        if(Marks >= 90){
            return "A+";
        }
        else if(Marks >= 80 && Marks < 90){
            return "A";
        }
        else if(Marks >= 70 && Marks < 80){
            return "B+";
        }
        else if(Marks >= 60 && Marks < 70){
            return "B";
        }
        else if(Marks >= 50 && Marks < 60){
            return "C";
        }
        else if(Marks >= 40 && Marks <= 30){
            return "D";
        }
        else if(Marks < 30){
            return "Fail";
        }
        else{
            return "Invalid Marks Entered";
        }
    }
};

int main() {
	// your code goes here
	student s;
	s.input();
	s.display();
	s.Gradedisplay();
}
