//Abstract class program
#include<iostream>
using namespace std;
class Parent
{
public:
virtual void CompleteGraduation()=0;
};
class Child :public Parent
{
public:
void CompleteGraduation()
{
cout<<"\nIn BCS ...";
}
};
int main()
{
Child C;
C.CompleteGraduation();
return 0;
}
