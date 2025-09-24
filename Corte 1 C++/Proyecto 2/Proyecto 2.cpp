#include <iostream>

int main(int argc, char** argv) {
	
	int Fahr, Cels;
	
	int Lower, Upper, Step;
	
	Lower=0;
	Upper=300;
	Step=20;
	
	Fahr=Lower;
	
	while (Fahr <= Upper){
		
		Cels=5*(Fahr-32)/9;
		
		std::cout << Fahr << "\t" << Cels << "\n" << std::endl;
		
		Fahr=Fahr+Step;
		
	}
	
	
	return 0;

}
