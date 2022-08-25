#include <iostream>
using namespace std;
 
class A
{
public:
     void fun();
};
 
class B
{
public:
   void fun();
};
 
int main()
{
    int a = sizeof(A), b = sizeof(B);
    cout<<b;
    return 0;
}