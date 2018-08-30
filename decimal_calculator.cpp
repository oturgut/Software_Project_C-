#include <iostream>
#include <string>
using namespace std;
int main() {
	double first_number;
	double second_number;
	cout << "Enter the first number: \n";
	cin >>  first_number;
	cout << "Enter the second number: \n";
	cin >>  second_number;
	cout << "The sum is: " << first_number + second_number << endl;
	cout << "The multiplication is: " << first_number * second_number << endl;
	cout << "The division is: " << first_number / second_number << endl;
	cout << "The substraction is: " << first_number - second_number << endl;
	return 0;
}
