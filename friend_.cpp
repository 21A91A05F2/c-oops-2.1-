#include<iostream>
using namespace std;
class clas_name{
	private:
		int a=40;
	protected:
		int b=10;
	public:
		friend class B;
};
class B{
	public:
		void fun(clas_name obj)
		{
			cout<<obj.a<< " "<<obj.b;
		}
};
/*	public:
		friend void fun(clas_name);//friend function
};
void fun(clas_name obj)
{
	cout<<obj.a;
}*/


int main()
{
	/*clas_name obj;
	fun(obj);*/
	clas_name obj;
	B obj1;
	obj1.fun(obj);
}
