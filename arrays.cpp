#include <stdio.h> 
#include <iostream>

using namespace std;

int main()
{

    int n;
    cout<< "enter size\n";

    cin>> n;
    int A[n];
    A[0]= 2;
    A[1]= 4;
    A[2]= 7;
 
    for(int i=0; i< n; i++)
{
    cout<<A[i]<<endl;
}

 return 0;
}




