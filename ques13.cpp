#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

template <typename T>
inline T const& get_max (T const& a, T const& b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	int choice;
	int a, b;
	double c, d;
	string e, f;

	while(1)
	{
		cout<<"Select the one option:";
		cout<<"\n1. integer\n2. float\n3. string.\n4. exit";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"Enter two integers:\n";
				cin>>a>>b;
				cout << "max is : "<<get_max(a, b)<<endl;
				break;

			case 2: cout<<"Enter two floats:\n";
				cin>>c>>d;
				cout << "max is : "<<get_max(c, d)<<endl;
				break;

			case 3: cout<<"Enter two strings:\n";
				cin>>e>>f;
				cout << "max is : "<<get_max(e, f)<<endl;
				break;
			
			case 4: cout<<"Good bye....\n";
				exit(0);

			default: cout<<"please select correct option:\n";
				break;

		}
	}
	return 0;
}
