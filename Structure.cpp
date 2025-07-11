//Structure program
#include<iostream>
using namespace std;
struct Result 
{
int Id;
char Name[20];
};
int main()
{
struct Result R;
cout<<"\nEnter a student Id.....";
cin>>R.Id;
cout<<"\nEnter a student Name.....";
cin>>R.Name;
cout<<"\nStudent Id ="<<R.Id;
cout<<"\nStudent Name ="<<R.Name;
return 0;
}
