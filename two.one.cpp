#include<iostream>
using namespace std;
inline int square ( int x) {return x*x;}

    double area(double r) {return 3.14*square(r);};
    int area ( int l, int b) {return l*b;}
    double area (double b , double h) {return 0.5*b*h;}

    int main()
    {
        cout<<" Square (6) "<<square(6)<<endl;
        cout<<"Area of circle is "<<area(5.0)<<endl;
        cout<<"Area of rectangle is "<<area(4,5)<<endl; 
        cout<<"Area of triangle is "<<area(3.0,8.0)<<endl;
        return 0;   
    }