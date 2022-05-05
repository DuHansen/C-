#include <stdio.h>
#include <iostream>

using namespace std;

struct rectangle
{
    int lenght;
    int breadth;
};


int main()
{
struct rectangle r1= {5,10};

r1.breadth={7};

cout<<r1.lenght<<endl;
cout<<r1.breadth<<endl;
return 0;
}
