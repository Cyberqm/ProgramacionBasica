#include <iostream>
#include <iomanip>

int main(){
	
	float Fahr, Cels;
	
	float Lower, Upper, Step;
	
	Lower = 0;
	Upper = 300;
	Step = 20;
	
	Fahr=Lower;
	
	while(Fahr <= Upper){
		
		Cels=5*(Fahr-32)/9;
		
		std::cout << std::fixed << Fahr << "\t" << std::setprecision(1) << Cels << "\n" << std::setprecision(0) << std::endl;
		
		Fahr=Fahr+Step;
		
	}

	return 0;
}