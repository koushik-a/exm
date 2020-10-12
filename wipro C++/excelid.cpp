#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
	string s;
    getline(cin, s);
   	int res =0;
   int n = s.length();
   for(int i=0;i<n;++i)
   {
   	res += pow(26, i)*(s[n-(i+1)] - 'A' +1);
   }

cout << res  << endl;

}
