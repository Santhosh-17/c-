 #include<iostream>
using namespace std;
#include<string>
class a
{
protected:
int num;
string name;
public:
a();

void get(); 
~a()
{
cout<<"DESTRUCTOR OF a\n";
}
};
class b :public a
{
public:
b()
{
cout<<"Constructor of b \n";
}

void display()
{
cout<<"The name is "<<name <<" and the number is "<<num<<endl;
}
~b()
{
cout<<"DESTRUCTOR OF b\n";
}


};
void a :: get()
{
cout<<"Data Getting\n";
cout<<"Enter the name and number:"<<endl;
cin>>name>>num;
}
a::a()
{
num = 0;
name = '\0';

cout<<"Constructor of a \n";
}
int main()
{
b obj;
obj.get();
obj.display();
return 0;
}


