//Multilevel inheritance program
#include<iostream>
using namespace std;
class GrandFather
{
public :
void set()
{
cout<<"\nI have 20 ekar land and 2 well....";
}
};
class Father :public GrandFather
{
public:
void get()
{
cout<<"\nI have 10 ekar land and 1 well and 1 bike.....";
}
};
class Child :public Father
{
public:
void wait()
{
cout<<"\nI Have 2 cars....";
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

  
