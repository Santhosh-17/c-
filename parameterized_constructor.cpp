#include<iostream>
using namespace std;
#include<string>
class sample
{
private:
string name ;
int num;
public:
sample(string x,int y)
  :name(x),num(y)
{
cout<<"The name is "<<name<<" and the num is "<<num<<endl;
}

~sample()
{
cout<<"\nProgram Executed Successfully!";
}
};

int main()
{
sample obj("Sandy the rock",200);
 
return 0;
}

