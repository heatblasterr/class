#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
		friend void add(A ob);
};
void add(A ob)
{
	ob.a=64;
	ob.b=23;
	cout<<"sum is="<<ob.a+ob.b;
}
main()
{
	class A obj;
	add(obj);
}
