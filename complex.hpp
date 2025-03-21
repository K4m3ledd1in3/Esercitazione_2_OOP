#pragma once
#include <concepts>
#include <cmath>
template <typename I> 
requires std::integral<I> || std::floating_point<I>
/*
std::floating_point<I> includes types such as float, double.
*/
class complex{
	I re, im;
	public:
		complex():
			re(0), im(0)
			{}
		complex(I r, I i):
			re(r), im(i)
			{}
		I real(void) const{
			return this->re;
		}
		I imaginary(void) const{
			return this->im;
		}
		complex& operator+=(const complex& other){
			I a = this->re;
			I b = this->im;
			I c = other.re;
			I d = other.im;
			
			this->re = a + c;
			this->im = b+d;
			return *this;
		}
		complex operator+(const complex& other) const{
			complex buff = *this;
			buff+=other;
			return buff;
		}
		complex& operator+=(const I& other){
			I a = this->re;
			I b = this->im;
			this->re = a + other;
			return *this;	
		}
		
		complex operator+(const I& other) const{
			complex buff = *this;
			buff+=other;
			return buff;
		}

		complex& operator*=(const complex& other){
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
		complex operator*(const complex& other) const{
			complex buff = *this;
			buff*=other;
			return buff;
		} 
		
		complex& operator*=(const I& other){
			I a = this->re;
			I b = this->im;
			this->re = a*other;
			this->im = b*other;
			return *this;
		}
		complex operator*(const I& other) const{
			complex buff = *this;
			buff*=other;
			return buff;
		} 
		complex conjugate(void) const{
			return complex(this->re, -1*this->im);
		}

};
template<typename I>
std::ostream&operator<<(std::ostream& os, const complex<I>& c) {
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