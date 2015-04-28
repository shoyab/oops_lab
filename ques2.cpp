#include<iostream>
#include<string>
using namespace std;

class Person{
public:
	string name;
	int age;
public:
	Person(string a, int b){
		name = a;
		age = b;
	}
};

class Student: public Person{
public:
	Student(string a, int b):Person(a, b){}

	Student* call(){return this;}

	void change(){
		cout<<"\nEnter new name of Student:";
		cin>>name;
		cout<<"\nEnter age:";
		cin>>age;
	}

	void show(){
		cout<<"Student Name: "<<name<<" , Age: "<<age<<endl;
	}

	void delet(){
		cout<<"Student "<<name<<" has been deleted:\n";
		this->name = "";
		this->age = 0;
	}
};

class Employee: public Person{
public:

	Employee(string a, int b):Person(a, b){}

	Employee* call(){return this;}

	void change(){
		cout<<"\nEnter new name Employee:";
		cin>>name;
		cout<<"\nEnter age of Employee";
		cin>>age;
	}

	void show(){
		cout<<"Employee name: "<<name<<" and age: "<<age<<endl;
	}

	void delet(){
		cout<<"Employee "<<name<<" has been deleted:\n";
		this->name = "";
		this->age = 0;
	}
};

int main()
{
	Student st1("xyz",22);
	Student st2("uio",26);
	Student st3("ghj",24);
	Employee em1("abc",34);
	Employee em2("def",35);
	Employee em3("ghi",36);

	cout<<"Student details:\n";
	st1.show();
	st2.show();
	st3.show();
	cout<<"Employee details:\n";
	em1.show();
	em2.show();
	em3.show();

	em1.delet();
	st1.delet();

	em2.change();
	st2.change();

	cout<<"Address of student objects\n";
	cout<<st1.call()<<endl;
	cout<<st2.call()<<endl;
	cout<<st3.call()<<endl;

	cout<<"Address of Employee objects:\n";
	cout<<em1.call()<<endl;
	cout<<em2.call()<<endl;
	cout<<em3.call()<<endl;

	return 0;
}