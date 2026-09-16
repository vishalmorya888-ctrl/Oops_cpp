#include <bits/stdc++.h>
using namespace std;

class University {
    private:
    string universityName;
    
    public:
    University(const string& name) : universityName(name) {}
    
    class Department{
        private:
        string departmentName;
        int studentCount;
        
        public:
        Department(const string& deptName, int count) : departmentName(deptName), studentCount(count) {}
        
        void displayDetails(const University& univ) const {
            cout << "University Name: " << univ.universityName << "\n";
            cout << "Department Name: " << departmentName << "\n";
            cout << "Total Students: " << studentCount << "\n";
        }
    };
};

int main() {
	// your code goes here
	University myUniversity("ABES Engineering College");
	University::Department aimlDept("AIML",240);
	aimlDept.displayDetails(myUniversity);
	return 0;
}
