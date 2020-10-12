#include <iostream> 
using namespace std; 
int main() 
{ 
    unsigned char  n;
    cin>>n;
    unsigned char x = (unsigned char) ~0;
    cout<< (n&(x<<(sizeof(x)-n))>>(sizeof(x)-n)) <<  endl;
    
}

