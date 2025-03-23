#include <iostream>
#include "complex.hpp"

int main(){
	    using complex_number = complex_number<double>;
	    complex_number c1(3,3);	    
		complex_number c2(2.5,2.05);
	    complex_number c3(3,0);
	    complex_number c4(5,0);
	    std::cout << "c1-> "<<c1 <<std::endl;
	    std::cout << "c2-> "<<c2 <<std::endl;
	    std::cout << "c3-> "<<c3 <<std::endl;
	    std::cout << "c4-> "<<c4 <<std::endl;
	    std::cout << "c1+c2-> " << c1+c2<<std::endl;
	    std::cout << c1.conjugate() << std::endl;
	    std::cout << c2.imaginary() << std::endl;
	    std::cout << c2.real() << std::endl;
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
		2.05
		2.5
		3
		c1*c2-> 1.35+13.65i
		c3*c4-> 15
		*/
		
}
