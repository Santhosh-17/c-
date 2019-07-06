   #include<iostream>
   using namespace std;

 template <class T>
 class add{
     T a, b;
 public:
    add(T x, T y)
    :a(x),b(y){
    cout<<"Constructor is ON"<<endl<<"Data GOT"<<endl;
    }
   T sum ( );

 ~add()
  {
cout<<"\nProgram is SUCCESSFULL!!";
}

 };

 template <class T>
 T  add <T> :: sum( )
{
    return a+b;
 }

 int main( )
 {
     add <int> obj(5,5);
     cout<<obj.sum();
     return 0;
 }
