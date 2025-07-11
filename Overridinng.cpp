//Function overriding program
#include<iostream>
using namespace std;
class Parent
{
public:
void completeGraduation()
{
cout<<"\nIn BTech...";
}
};
class Child :public Parent
{
public:
void completeGraduation()
{
cout<<"\nIn Bcs ....";
}
};
int main()
{
Child C;
C.completeGraduation();
return 0;
}
