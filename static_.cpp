#include<iostream>
using namespace std;
class clas_name{
	public:
		static int college;
		int a=2;
		void fun()
		{
			a=100;
			college=10;
	}
};
int clas_name::college=1;
int main()
{
	clas_name obj1;
	clas_name obj2;
	obj1.fun();
	cout<<obj1.college<<" "<<obj1.a<<endl;
	cout<<obj2.college<<" "<<obj2.a;
}


