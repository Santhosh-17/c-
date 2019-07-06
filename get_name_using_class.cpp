#include<iostream>
using namespace std;
class get_name{
private:
    char name[30];
public:
    void input( )
    {
        cout<<"Enter your name:"<<endl;
        cin>>name;
    }
    void display( )
    {
        cout<<"Your name is:"<<name;
    }
};
int main( )
{
    get_name c;
    c.input( );
    c.display( );
    return 0;
}
