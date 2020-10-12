#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int count;
	unsigned char x = (unsigned char)~0;
	for(count=1; ((x= x>>1) > 0); count++)
	;
	cout << count / 8 <<endl;
}
