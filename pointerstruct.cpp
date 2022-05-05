#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int lenght;
    int breadth; 
};

int main()
{
//Em c++ não precisa usar a variavel struct.
struct rectangle r = {2,5};

printf("%d\n",r.lenght );//c

cout<<r.lenght<<endl;//c++
cout<<r.breadth<<endl;

rectangle *p=&r;

cout<<p->breadth<<endl;//c++

printf("%d\n",p->lenght);//c


p = (struct rectangle*)malloc(sizeof (struct rectangle));

p->breadth = 10;
p->lenght = 15;

cout<<p->lenght<<endl;
return 0;
}