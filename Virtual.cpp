//Virtual function program
#include<iostream>
using namespace std;
class Parent
{
public:
virtual void CompleteGraduation()
{
cout<<"\nIN MBBS....";
}
};
class Child :public Parent 
{
public:
void CompleteGraduation()
{
cout<<"\nIN BCS...";
}
};
int main()
{
Child C;
C.CompleteGraduation();
return 0;
}
