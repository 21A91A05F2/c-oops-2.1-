#include<iostream>
using namespace std;
//encapsulation property of oops
class clas_name{
	private:
		int a;
		int b;
		void fun(){
			cout <<"hai";	
		}
		public:
			void fun1()
			{
				fun();
			}
			
};

int main()
{
	clas_name obj;
	obj.fun();
}
