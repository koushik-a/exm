#include <iostream>
using namespace std;


int funcone(int x);
int functwo();            /*  Prototypes */
int functhree();
int main()
{
   funcone(5);
   return 0;
}

int funcone(int x)
{
     cout << "hello from funcone" << "\n";
      return x;
}

int functwo(int y)
{
   return 4;
   cout << "hello from functwo" << "\n";
}

int functhree(int z)
{
   cout << "hello from functhree" << "\n";
}
