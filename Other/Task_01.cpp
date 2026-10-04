// example 01
#include<iostream>
using namespace std;

class bio {
	public:
		string name, school; 
		int age;

		void intro() {
			cout << name << endl;
			cout << age << endl;
			cout << school << endl;
		}
};

int main() {
	bio b1 ;

	b1.name = "Aavani Raj";
	b1.age = 18;
	b1.school = "KKVMHSS PANOOR";

	b1.intro();

	return 0;
}


// example 02
#include<iostream>
using namespace std;

int age;
double marks;

int main() {

	cout << "Enter your age: ";
	cin >> age;
	
	cout << "Enter your marks: ";
	cin >> marks;
	
	// cout << "You are " << age << " years old" << " and my mark is " << marks << "." << endl;
    cout << "You are " << age << " years old ";
    cout << "and my marks is " << marks << ".";
}


// example 03
#include<iostream>
using namespace std;

int main() {
	string name;
	int age;
	double marks;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Enter your marks: ";
	cin >> marks;

	cout << "My name is: " << name << endl;
	cout << "My age is : " << age << endl;
	cout << "My marks are: " << marks << endl;
	
}