//Multiple inheritance program
#include<iostream>
using namespace std;
class Mother
{
public :
void set()
{
cout<<"\nI have 2 kg of gold ....";
}
};
class Father 
{
public :
void get()
{
  cout<<"\n I have 10 ekar land and 2 bike...";
}
};
class Child :public Father , public Mother
{
public :
void wait()
{
cout<<"\n I have 2 cars...";
}
};
int main()
{
  Child C;
C.set();
C.get();
C.wait();
return 0;
}
