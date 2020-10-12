#include <iostream> 
using namespace std; 
int main() 
{ 
  unsigned int n;  
  cin>>n;
  unsigned int  NO_OF_BITS = sizeof(n) ; 
  unsigned int reverse_num = 0, i, temp; 
  
    for (i = 0; i < NO_OF_BITS; i++) 
    { 
        temp = (n & (1 << i)); 
        if(temp) 
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i)); 
    }
    cout<< reverse_num << endl; 
} 
