#include <iostream>
using namespace std;

int sumar(int a, int b){
	int r= a+b;
	return r;
}

int restar(int x, int y){
	int z= y-x;
	return z;
}

int multipli(int m, int n){
	int p= m*n;
	return p;
}

int main() {
	
	int h= sumar(3,2);
	cout<<h<<endl;
	
	int f= restar(15,16);
	cout<<f<<endl;
	
	int q= multipli(45,5);
	cout<<q<<endl;

	
	return 0;
	
}
