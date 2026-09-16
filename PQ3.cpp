#include <bits/stdc++.h>
using namespace std;

class Patient{
    private:
    int patientId;
    string patientName;
    static int activePatients;
    
    public:
    Patient(int id, const string& name) : patientId(id) , patientName(name){
        ++activePatients;
        cout << "Admitted: " << patientName << " (ID: " << patientId << ")\n";
    }
    
    ~Patient() {
        --activePatients;
        cout << "Discharged: " << patientName << " (ID: " << patientId << ")\n";
    }
    
    static void showActivePatients() {
        cout << "Current active patients are :" << activePatients << "\n\n";
    }
};

int Patient::activePatients = 0;

int main() {
	// your code goes here
	Patient::showActivePatients();
	Patient p1(101, "Aman");
	Patient::showActivePatients();
	
	{
	    Patient p2(102,"Bob");
	    Patient p3(103, "Vikas");
	    Patient::showActivePatients();
	}
	
	Patient::showActivePatients();
	return 0;
}
