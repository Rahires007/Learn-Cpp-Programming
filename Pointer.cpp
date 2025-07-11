//Pointer and Double pointer program
#include<iostream>
using namespace std;
int main()
{
int Num=10;
int *ptr=&Num;
int **p2p=&ptr;
cout<<"\nValue at Num ="<<Num;
cout<<"\nValue at *ptr ="<<*ptr;
cout<<"\nValue at **p2p ="<<**p2p;
return 0;
}
