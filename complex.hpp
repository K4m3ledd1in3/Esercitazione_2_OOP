#pragma once
#include <concepts>
#include <cmath>
template <typename I> 
requires std::integral<I> || std::floating_point<I>
/*
std::floating_point<I> includes types such as float, double.
*/
class complex_number{
	I re, im;
	public:
		complex_number():
			re(0), im(0)
			{}
		complex_number(I r, I i):
			re(r), im(i)
			{}
		I real(void) const{
			return this->re;
		}
		I imaginary(void) const{
			return this->im;
		}
		complex_number& operator+=(const complex_number& other){
			I a = this->re;
			I b = this->im;
			I c = other.re;
			I d = other.im;
			
			this->re = a + c;
			this->im = b+d;
			return *this;
		}
		complex_number operator+(const complex_number& other) const{
			complex_number buff = *this;
			buff+=other;
			return buff;
		}
		complex_number& operator+=(const I& other){
			I a = this->re;
			I b = this->im;
			this->re = a + other;
			return *this;	
		}
		
		complex_number operator+(const I& other) const{
			complex_number buff = *this;
			buff+=other;
			return buff;
		}

		complex_number& operator*=(const complex_number& other){
			I a = this->re;
			I b = this->im; 
			I c = other.re;
			I d = other.im;
			//i use the fact that the canonical product between complex numbers is given by the following rule:
			// Re(z1*z2) = Re(z1)Re(z2)-Im(z1)Im(z2); Im(z1*z2) = Re(z1)*Im(z2)+Re(z2)*Im(z1)
			this->re = a*c-b*d;
			this->im = a*d+c*b;
			return *this;
		}
		complex_number operator*(const complex_number& other) const{
			complex_number buff = *this;
			buff*=other;
			return buff;
		} 
		
		complex_number& operator*=(const I& other){
			I a = this->re;
			I b = this->im;
			this->re = a*other;
			this->im = b*other;
			return *this;
		}
		complex_number operator*(const I& other) const{
			complex_number buff = *this;
			buff*=other;
			return buff;
		} 
		complex_number conjugate(void) const{
			return complex_number(this->re, -1*this->im);
		}

};
template<typename I>
std::ostream&operator<<(std::ostream& os, const complex_number<I>& c) {
    if (c.imaginary() != 0){
     if(c.real()!=0){
	 
    	if(c.imaginary()>0)
        	os << c.real() << "+" << c.imaginary() <<"i";
		else
        	os << c.real() << "-" << abs(c.imaginary()) << "i";
   }else{
   		os << c.imaginary() << "i";
   }
   }
    else{
        os << c.real();
	}
    return os;
}