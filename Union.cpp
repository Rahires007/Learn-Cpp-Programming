//Union program
#include<iostream>
using namespace std;
union Result
{
int Id;
char Name[20];
};
int main()
{
union Result R;
cout<<"\nEnter a student id....";
cin>>R.Id;
cout<<"\nStudent Id ="<<R.Id;
cout<<"\nEnter a student Name....";
cin>>R.Name;
cout<<"\nStudent Name ="<<R.Name;
return 0;
}
