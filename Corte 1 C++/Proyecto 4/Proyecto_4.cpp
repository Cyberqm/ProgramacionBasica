#include <iostream>

int a, b, r;

int main() {
	
	a = 89;
	b = 1;
	r= a+b;
	
	std::cout << a << " and " << b << "'s adittion is equivalent to: " << r << std::endl;
	
	if(r==40){
		
		std::cout << r << " is equal to forty." << std::endl;
		
	}
	
	else{
		
		std::cout << r << " is NOT equal to forty. " << std::endl;
		
		if(r>40){
			
			std::cout << "The result " << r << " is greater than forty. " << std::endl;
		}
		
		else{
			
			std:: cout << "The result " << r << " is lesser than forty. " << std::endl;
		}
	}
	
	
	return 0;
}