
#include <iostream>
using namespace std;

class sampleclass
{
    public:
   int x;
    sampleclass()
    {
      x= 10;
       cout<<endl<<x;
	   cout << "\n" << "this is the constructor";
    }

 /*   ~sampleclass()
    {
       cout << "\n" << "this is the destructor";
    }
*/
    sampleclass (sampleclass &s)
    {
    
      x= s.x;
       cout<<endl<<x;
	  cout << "\n" << "this is the copy constructor getting called";
    }

    sampleclass &operator=(sampleclass &v)
    {
      x= v.x;
      cout<<endl<<x;
	   cout << "\n" << "this is the copy assignment operator getting called" << "\n";
    }
};

int main()
{

  sampleclass s1;
  sampleclass s2(s1);
  sampleclass s3 = s1;  
    return 0;
}
