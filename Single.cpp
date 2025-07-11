//Single inheritance program
#include<iostream>
using namespace std;
class Father
{
public:
void Test()
{
cout<<"\nI Have 6 ekar land and 2 bike....";
}
};
class Child :public Father
{
public:
void sample()
{
cout<<"\nI Have 2 cars ...";
}
};
int main()
{
Child C;
C.Test();
C.sample();
return 0;
}
