#include<iostream>
#include<string>
using namespace std;

class Student{
	private:

	//string name,st_class,roll_no;
	string name, st_class, roll_no;
	int age;

	public:
	
	friend ostream &operator<<( ostream &output, const Student &s){
		//output <<"name: "<<s.name<<"\n"<<"class: "<< s.st_class <<"\n"<<"roll no. "<< s.roll_no <<"\n"<<"age :"<<s.age;	
		output <<"\nname: "<<s.name << "\nage:" << s.age << "\nclass: " << s.st_class << "\nroll no. " << s.roll_no << endl;	
		return output;
	}

	friend istream &operator>>( istream &in, Student &s){
		//in>>s.name<<s.st_class<<s.roll_no<<s.age;
		in >> s.name >> s.age >> s.st_class >> s.roll_no;		
		return in;
	}	
};

int main()
{
	Student st;
	cout<<"enter name, age, class and roll number of a student:\n";
	cin>>st;
	cout<<st;
	return 0;
}
