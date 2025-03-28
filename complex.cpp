#include <iostream>
#include "complex.hpp"

int main(){
	    using complex_number = complex_number<double>;
	    complex_number c1(3,3);	    
	    complex_number c2(3,2);
	    complex_number c3(3,0);
	    complex_number c4(5,0);
	    complex_number c5 = 3;
	    double s = 3;
	    std::cout << "c1-> "<<c1 <<std::endl;
	    std::cout << "c2-> "<<c2 <<std::endl;
	    std::cout << "c3-> "<<c3 <<std::endl;
	    std::cout << "c4-> "<<c4 <<std::endl;
	    std::cout << "c1+c2-> " << c1+c2<<std::endl;
	    std::cout << "c1's conjugate-> " << c1.conjugate() << std::endl;
	    std::cout << "Imaginary part of c2-> " << c2.imaginary() << std::endl;
	    std::cout << "c2's real part-> "<< c2.real() << std::endl;
	    std::cout << "c1*c2-> " << c1*c2 << std::endl;
	    std::cout << "c3*c4-> " << c3*c4 << std::endl;
	    if(c2==c3)
	    {
	    	std::cout << "c2=c3 " << std::endl;
	    }
	    else
	    {
			std::cout << "c2!=c3" << std::endl;
	    }
	    std::cout << "c2/c1 -> " << c2/c1 << std::endl;
	    std::cout << "c1/c2 -> " << c1/c2 << std::endl;
	    std::cout << "c1/s ->" << c1/s << std::endl; 
	    std::cout << "c1+s -> " << c1+s << std::endl;
	    std::cout << "c2-s->" << c1-s << std::endl;
	    std::cout << "c3-c2-> " << c3-c2 << std::endl; 
	    std::cout << "c3+c5-> " << c3+c5 << std::endl;
	    c2 = c3;
	    std::cout << "c2->" << c2 << std::endl;
	    c2 = 6.0;
	    std::cout << "c2-> " << c2 << std::endl;
	    //check - commutatività
	    std::cout << "c2*s-> " << c2*s << std::endl;
	    std::cout << "c2*s-> " << s*c2 << std::endl;
    	    std::cout << "s+c2->" << s+c2 << std::endl;
    	    std::cout << "c2+s->" << c2+s << std::endl;
    	    std::cout << "c2^(-1)-> " << c2.inverse() << std::endl;
}
