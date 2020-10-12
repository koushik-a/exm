#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n=0,c=0,I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
	int arr[10];
    arr[0] = I;
	arr[1] = V;
	arr[2] = X;
	arr[3] = L;
	arr[4] = C;
	arr[5] = D;
	arr[6] = M;
	cin>>s;
    n= s.length();
 cout<< n << endl;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<6;j++)
  	{
     if(s[i] ==arr[j])
	 {
	   c= c + arr[j];	
	 }	
    } 
}
}
