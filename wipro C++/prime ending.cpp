#include<iostream>

using namespace std;
int main()
{
	int n,i,l;
	cin >> l;
	for(n=2;n<=l;n++)
	{
		for(i=2;i <= (n/2);i++)
		{
			if(n%i==0){
				i=n;
				break;
			}
		}
		if(i!=n &&( n==3 || n==7 || (n%10)==3 || (n%10)==7){
			cout << n << endl;
		}
	}
	return 0;
}
