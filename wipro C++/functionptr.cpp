#include <iostream> 
using namespace std; 
int main() 
{ 
    void newfunc(int);
    void newfuncone(int);
	void (*fptr)(int);    
	int x = 10;
	//fptr = newfunc;
	fptr = newfuncone;
	newfunc(x);
	(*fptr)(x);
}
void newfunc(int p)
{
	cout << inside func << endl;
}
void newfuncone(int p)
{
	cout << inside func << endl;
}
