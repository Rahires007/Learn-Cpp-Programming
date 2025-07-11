//Switch case statement program
#include<iostream>
using namespace std;
int main()
{
int Num,Operation;
cout<<"\nEnter a no....";
cin>>Num;
cout<<"\n1...Square \n2...Cube";
cout<<"\nSelect above operation you want to perform.....";
cin>>Operation;
switch(Operation)
{
case 1 :
cout<<"\n Square ="<<Num*Num;
break;

case 2 :
cout<<"\n Cube ="<<Num*Num*Num;
break;

default :
cout<<"\n Invalid option please select correct operation....";
break;

}
return 0;
}
