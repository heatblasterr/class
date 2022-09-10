#include<iostream>
using namespace std;
class student
{
	int rollno;
	int s1, s2, s3;
	char name[30];
	public:
		student()
		{
		cout<<"enter the rollno, name and marks of 3 subjects = ";
		cin>>rollno>>name>>s1>>s2>>s3;
		}
		void average()
		{
			float avg;
			avg=(s1+s2+s3)/3;
			cout<<avg;
		}
};
main()
{
	class student obj;
	obj.average();
}

