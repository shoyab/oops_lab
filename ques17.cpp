#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<string.h>
using namespace std;

class ContentManager{
	char file[500];
	char data[500];
public:
	ContentManager(){
		cout<<"Please Enter your file name;\n";
		cin>>file;
	}

	void add(){
		cout<<"Please enter data:\n";
		cin>>data;
	}

	void delet(){
		// open the file for writing
		ofstream myfile (file);
		myfile.is_open();
		//put null string for deleting
		myfile << "";
		myfile.close();
	}

	void search(){
		string search;
		cout<<"Enter searching elements:\n";
		cin>>search;
		string contentoffile;
		//open file for reading
		ifstream myfile (file);
		myfile.is_open();
		//search element in file
		while(getline(myfile,contentoffile)){
			if(contentoffile.find(search)!=0){
				cout<<"Search successfully.\n";
				break;
			}
			else{
				cout<<"Search not found";
			}
		}
		myfile.close();
	}

	void save(){
		//open file and append the content in file
		ofstream myfile (file,ios::app);
		myfile.is_open();
		myfile<<data;
		myfile.close();
		output();
	}

	void output(){
		string out;
		ifstream myfile (file);
		myfile.is_open();
		while(getline(myfile,out)){
			cout<<out;
		}
		myfile.close();
	}
};

int main()
{
	int choice;
	ContentManager obj;
	while(1){
		cout<<"1.Add\n2.Delete\n3.Search\n4.Save\n5.Exit\n";
		cin>>choice;
		switch(choice){
			case 1: obj.add();
					break;
			case 2: obj.delet();
					break;
			case 3: obj.search();
					break;
			case 4: obj.save();
					break;
			case 5: cout<<"Good bye....";
					exit(0);
			default: cout<<"Please enter correct choice....";
		}
	}
	return 0;
}