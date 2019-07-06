#include<iostream>
using namespace std;

class student
{
private:
int rollno;
char name[30];
public:
void get();
void display();
};
void student :: get()
{
cout<<"Enter the name and rollno:\n";
cin>>name>>rollno;
}
void student :: display()
{
cout<<"The Entered name and rollno of the student is:"<<name<<" "<<rollno;
}

int main()
{
student info;
info.get();
info.display();
return 0;
}


