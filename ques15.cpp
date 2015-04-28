#include<iostream>
#include<math.h>
using namespace std;

class two_d{
public:
	int x, y;

public:
	two_d(int i, int j){
		x = i;
		y = j;
	}

	void two_distance(two_d point){
		int point1[2], point2[2], d;
		point1[0] = x;
		point1[1] = y;
		point2[0] = point.x;
		point2[1] = point.y;
		d = sqrt(pow((point2[0] - point1[0]),2) + pow((point2[1] - point1[1]),2));
		cout<<"Distance in 2d is: "<<d<<endl;
	}
};

class three_d:public two_d{
	int z;
public:
	three_d(int i, int j, int k):two_d(i, j){
		z = k;
	}

	void three_distance(three_d point){
		int point1[3], point2[3];
		double d2;
		point1[0] = x;
		point1[1] = y;
		point1[2] = z;
		point2[0] = point.x;
		point2[1] = point.y;
		point2[2] = point.z;
		d2 = sqrt( pow((point2[0] - point1[0]),2) + pow((point2[1] - point1[1]),2) + pow((point2[2] - point1[2]),2) );
		cout<<"Distance in 3d is: "<<d2<<endl;
	}
};

int main()
{
	int a, b, c;
	int x, y, z;

	cout<<"\nEnter the x,y,z of point1";
	cin>> a >> b >> c;
	cout<<"\nEnter the x,y,z of point2";
	cin>> x >> y >> z;

	three_d obj1(a,b,c);
	three_d obj2(x,y,z);

	obj1.three_distance(obj2);

	return 0;
}