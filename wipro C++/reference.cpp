#include <iostream> 
using namespace std; 
int main() 
{ 
 int s=10;
 int &p=s;
 cout<<s <<p << endl;
 int &r=p;
 r=6;
 cout<<s <<p <<r << endl;
}
