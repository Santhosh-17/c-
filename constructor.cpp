#include<iostream>
using namespace std;
class add
{
private:
    int num1,num2;
    int sum;
public:
    add( )
    {
        cout<<"Constructor without parameters..\n";
        num1 = num2 = 0;
        sum = 0;
    }
    add(int s1,int s2)
    {
        cout<<"Constructor with parameters..\n";
        num1 = s1;
        num2 = s2;
        sum = 0;
    }
    add(add &a)
    {
        cout<<"COPY CONSTRUCTOR....\n";
        num1 = a.num1;
        num2 = a.num2;
        sum = 0;
    }
    void getdata( )
    {
        cout<<"Enter the data...."<<endl;
        cin>>num1>>num2;
    }
    void addition( )
    {
        sum = num1 + num2;
    }
    void putdata( )
    {
        cout<<"\n The numbers are...";
        cout<<num1<<'\t'<<num2;
        cout<<"\n The sum of the numbers are.."<<sum;

    }
    };
    int main( )
    {
        add a, b(10,20),c(b);
        a.getdata( );
        a.addition( );
        b.addition( );
        c.addition( );
        cout<<"\n Object of a:"<<endl;
        a.putdata( );
        cout<<"\n Object of b:"<<endl;
        b.putdata( );
        cout<<"\n Object of c:"<<endl;
        c.putdata( );
        return 0;
    }
