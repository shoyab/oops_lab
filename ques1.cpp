#include<iostream>
using namespace std;

class Base_comp{
	public:
		int real;
		int img;

	public:
		void input(){
			cout<<"Please enter the real number:\n";
			cin>>real;
			cout<<"Please enter the image number:\n";
			cin>>img;
		}
	friend class Sub;

		
};

class Derived_comp:public Base_comp{
	public:
		Derived_comp(int a, int b, int c, int d){
			cout<<"complex number: "<<(a+c)<<" + "<<(b+d)<<"i\n";
		}
};

class Sub{
	public:
	Sub(int a, int b, int c, int d){
		cout<<"complex number after subtraction: "<<(a-c)<<" + "<<(b-d)<<"i\n";
	}
};

int main()
{
	Base_comp c1,c2;
	c1.input();
	c2.input();
	Derived_comp(c1.real,c1.img,c2.real,c2.img);
	Sub(c1.real,c1.img,c2.real,c2.img);
	return 0;
}
