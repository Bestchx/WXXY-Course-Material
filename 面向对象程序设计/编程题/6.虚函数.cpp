//虚函数：动态绑定的基础，实现运行过程中的多态，非静态函数成员
//实现动态多态，就必须使用 虚函数 
//虚函数声明只能出现在类定义的函数原型声明中，不能在成员函数实现的时候
//virtual 类型 函数名 
 #include<iostream>
using namespace std;

class base1{
	public:
		virtual void display() const ;		//声明虚函数只能出现在类定义的函数原型声明中
		virtual ~base1();					//有虚析构函数，无虚构造函数 
}; 

void base1::display()  const{			//成员函数实现
		cout<<"this is base1"<<endl;	//虚函数声明不能在成员函数实现的时候
} 

class base2:public base1{		
	public:
		void display() const {cout<<"this is base2"<<endl;}		//自动判断覆盖基类的虚函数 
};

class de:public base2{
	public:
	virtual void display() const {cout<<"this is de"<<endl;}	//覆盖基类的虚函数 
};

void fun(base1 *ptr){
	ptr->display();
}

void fun1(base1 *ptr){
	ptr->base1::display();
}

int main(){
	base1 b1;	//定义base1类对象 
	base2 b2;
	de d;
	
	fun(&b1);
	fun(&b2);	//用base2对象指针调用fun函数 
	fun(&d);
	
	fun1(&b1);
	fun1(&b2);	
	fun1(&d);
	
	return 0;
}
