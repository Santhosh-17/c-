   #include<iostream>
   using namespace std;

  template <class T>
  T sum (T a,T b)
{
    return a+b;
}

 int main( )
 {
     int a = 2,b = 2;
     cout<<sum(a,b);
     return 0;
 }
