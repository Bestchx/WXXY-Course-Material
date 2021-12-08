#include <iostream>
#define pai 3.14
using namespace std;

class c{
	public:
		c(float x){
			r=x;
		};
		void area();
		void cir();
	private:
		float r;
};

void c::area() {
	cout<<"area="<<r*r*pai<<endl;
}

void c::cir(){
	cout<<"cir="<<r*2*pai<<endl;
}

int main(){
	c a(10);
	a.area();
	a.cir() ;
}
