#include <iostream>

using namespace std;

int main() {
	
	int myNumbers[] = {25, 50, 75, 100};
	
	cout << myNumbers[0] << endl;
	
	int myNumber[] = {25, 50, 75, 100};
	
	myNumber[0] = 33;
	
	cout << myNumber[0] << endl;
	
	int myValues[] = {25, 50, 75, 100};
	
	myValues[0] = 25;
	myValues[1] = 50;
	myValues[2] = 75;
	myValues[3] = 100;
	
	cout << myValues[0] << endl;
		
	return 0;
}
