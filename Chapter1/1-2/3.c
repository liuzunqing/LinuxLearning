#include<iostream>
#include<mcheck.h>
using namespace std;
class A{
public:
	A()
	{
		data=new char[10];
	}
	~A()
	{
		delete [] data;
	}
private:
	char *data;
};
class B:public A{
public:
        B()
        {
                dat=new char[10];
        }
        ~B()
        {
                delete [] dat;
        }
private:
        char *dat;
};
int main(){
	mtrace();
	A *ma=new B;
	delete ma;
	muntrace();
}
