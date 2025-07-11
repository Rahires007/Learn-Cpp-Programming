//Array program
#include<iostream>
using namespace std;
int main()
{
int Num[5];
int x;
cout<<"\nEnter 5 number.....";
for(x=0; x<=4; x++)
{
cin>>Num[x];
}
cout<<"\nGiven numbers....";
for(x=0; x<=4; x++)
{
cout<<"\n"<<Num[x];
}
return 0;
}
