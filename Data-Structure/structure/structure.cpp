#include<iostream>
using namespace std;
struct height{
    int feet;
    int inch;
};
int main()
{
struct height h1={13,11};
struct height h2={7,8};
struct height h;
h.inch=(h1.inch+h2.inch)%12;
int x=(h1.inch+h2.inch)/12;
h.feet=h1.feet+h2.feet+x;
cout<<h.feet<<" ";
cout<<h.inch<<" ";
return 0;
}