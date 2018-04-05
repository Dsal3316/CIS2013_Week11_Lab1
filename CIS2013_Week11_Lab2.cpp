#include <iostream>
#include <cstring>
using namespace std;

class BirthDate{
	public:
		int year=0;
		int month=0;
		int day=0;
		void print(){
		cout << month << "/" << day << "/" << year;
		}

	void set(int d, int m, int y){
	year=y;
	month=m;
	day=d;
	}
};


int main(){

	BirthDate bob;

	cout<< "Enter  bobs birthday day: ";
	cin>> bob.day;

	cout<<"Enter bobs birthday year: ";
	cin>> bob.year;

	cout <<"Enter bobs birthday month: ";
	cin>> bob.month;

	cout << "bob's birthday is ";
	bob.print();
	cout << endl;

	return 0;

}