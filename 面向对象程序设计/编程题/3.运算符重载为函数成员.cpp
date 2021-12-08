#include<iostream>
using namespace std;

class complex{														//复数类定义 
	public:
		complex(double r=0.0, double i=0.0):real(r), imag(i){ }		
		complex operator+ (const complex &c2) const;				//运算符重载函数成员 operator
		complex operator- (const complex &c2) const;
		void display() const;										//输出复数 
	private:
		double real;
		double imag;
};

complex complex::operator+(const complex &c2) const{				//重载运算符函数实现 
	return complex(real+c2.real ,imag+c2.imag );					//创建一个临时无名对象作为返回值 
} 

complex complex::operator-(const complex &c2) const{
	return complex(real-c2.real ,imag-c2.imag );
} 

void complex::display() const{
	cout<<"("<<real<<","<<imag<<")"<<endl;
}

int main(){
	complex c1(5,4),c2(2,10),c3;
	cout<<"c1=";c1.display() ;
	cout<<"c2=";c2.display() ;
	c3=c1-c2;
	cout<<"c3=c1-c2";c3.display() ;
	c3=c1+c2;
	cout<<"c3=c1+c2";c3.display() ;
	return 0;
}
