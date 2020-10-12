#include <iostream> 
using namespace std; 
int main() 
{ 
    int n,num;
    cin>>n;
    //cin>>num;
    for (int i = 3; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            cout << "1"; 
        else
            cout << "0"; 
    } 
} 

