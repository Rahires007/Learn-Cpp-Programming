//Hybrid inheritance program and virtual class program 
#include<iostream>
using namespace std;
class GrandFather
{
public :
void set()
{
cout<<"\nI have 20 ekar land and 2 kg gold.....";
}
};
class Father : public GrandFather
{
public :
void get()
{
cout<<"\nI have 10 ekar land and 1 kg gold.....";
}
};
class Fathers_Sister :public GrandFather
{
public :
void wait()
{
cout<<"\nI Have also 10 ekar land and 1 kg gold.....";
}
};
class Child :public Father ,public Fathers_Sister
{
public:
void Test()
{
cout<<"\nI have 20 ekar land and 2 kg gold.....";
}
};
int main()
{
  Child C;

C.get();
C.wait();
C.Test();
return 0;
}
