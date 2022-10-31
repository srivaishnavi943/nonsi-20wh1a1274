/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int fact(int n)

{
    if (n<=1){
       return 1;
    }
    else{
    return n*fact(n-1);
    }
}
int nPr(int n,int r)
{
    return fact(n)/fact(n-r);
}    
int main()
{
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    
    cout<<"enter r: ";
    cin>>r;
    
    cout<<n<<"P"<<r<< "=" <<nPr(n,r);
    

}

