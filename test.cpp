#include <iostream>
using namespace std;

class test
{

public:
     int a;
     int b;
     char c;
     test()
     {
          a=0;
          b=0;
          c=' ';
     }
};

int main()
{
     // test *ptr = new test;
     // cout<<ptr->a<<" "<<ptr->b<<" "<<ptr->c<<endl;
     int x;
     cin>>x;
     if(x)
          cout<<"1"<<"2"<<endl;
     else
          cout<<"3"<<"4";
     return 0;
}
