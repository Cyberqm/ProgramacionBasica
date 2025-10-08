#include <iostream>

using namespace std;

int main() {
	
	int myNumbers [] = {10, 25, 50, 75, 100};
	
	cout << sizeof(myNumbers) << endl;
	
	int myNumber [] = {10, 25, 50, 75, 100};
	
	int length = sizeof(myNumber) / sizeof(myNumber[0]);
	
	cout << length << endl;
	
	return 0;
}
