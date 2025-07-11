//Function program
#include<iostream>
using namespace std;
int Square(int);
int main()
{
int Num;
cout<<"\nEnter a number.....";
cin>>Num;
Square(Num);
return 0;
}
int Square(int x)
{
cout<<"\nSquare ="<<x*x;
return 0;
}
