#include<iostream>
using namespace std;

int main(){
	char a[100];
	char b;
	int i=0;
	cin>>a;
	cin>>b;
	
	for(int n=0;a[n]!='\0';n++){
		if(a[n]==b) i++;
	}
	
	cout<<i;
}
