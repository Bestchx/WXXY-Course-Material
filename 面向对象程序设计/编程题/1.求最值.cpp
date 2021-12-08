#include<iostream>
using namespace std;

class zui{
	public:
		void put();
		void max();
		void min();
	private:
		int a[10];
}; 

void zui::put(){
	for(int i=0;i<10;i++){
		int p;
		cin>>p;
		a[i]=p;
	}
}

void zui::max(){
	int x=a[0];
	for(int i=1;i<10;i++){
		if(x<a[i]) x=a[i];
	}
	cout<<x<<endl;;
}

void zui::min(){
	int x=a[0];
	for(int i=1;i<10;i++){
		if(x>a[i]) x=a[i];
	}
	cout<<x<<endl;
}

int main(){
	zui f;
	f.put() ;
	f.max() ;
	f.min() ;
	
	return 0;
}
