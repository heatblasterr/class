#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[30];
	public:

	void getdata()
	{
		cout<<"enter roll no. and name=";
		cin>>rollno>>name;
		
	}
	void putdata()
	{
		cout<<"rollno is ="<<rollno<<endl;
		cout<<"name is ="<<name<<endl;
	}
		};
	main()
	{
		class student *p;
		class student obj; //pointer to object
		p=&obj;
		p->getdata();
		p->putdata();
		}	

