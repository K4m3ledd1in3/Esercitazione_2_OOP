#include <iostream>
#include "complex.hpp"

int main(){
		using complex = complex<double>;
	    complex c2(2.5,2.05);
	    complex c1(3,3);
	    complex c3(3,0);
	    complex c4(5,0);
	    std::cout << "c1-> "<<c1 <<std::endl;
	    std::cout << "c2-> "<<c2 <<std::endl;
	    std::cout << "c3-> "<<c3 <<std::endl;
	    std::cout << "c4-> "<<c4 <<std::endl;
	    
	    std::cout << "c1+c2-> " << c1+c2<<std::endl;
		std::cout << c1.conjugate() << std::endl;
		std::cout << c3 << std::endl;
		std::cout << "c1*c2-> " << c1*c2 << std::endl;
		std::cout << "c3*c4-> " << c3*c4 << std::endl;
		//OUTPUT:
		/*
		c1-> 3+3i
		c2-> 2.5+2.05i
		c3-> 3
		c4-> 5
		c1+c2-> 5.5+5.05i
		3-3i
		3
		c1*c2-> 1.35+13.65i
		c3*c4-> 15
		*/
		
}