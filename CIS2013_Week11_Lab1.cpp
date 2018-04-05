#include <iostream>
#include <cstring>
using namespace std;

struct mydate {
	int day;
	int month;
	int year;
};

void printmyDate(mydate d){
	cout<< d.month<< "/" << d.day << "/" << d.year;
}

int main(){

	mydate bob_bday;
	mydate tom_bday;

	cout << "Enter the Bobs birthday day: ";
	cin >> bob_bday.day;

	cout << "Enter the Bobs birthday year: ";
	cin >> bob_bday.year;

	cout << "Enter the Bobs birthday month: ";
	cin >> bob_bday.month;

	cout << "Bobs birthday is";
	printmyDate(bob_bday);
	cout << endl;

	return 0;
}


