#include<iostream>
using namespace std;
int factorial( int n)
{
 int a=1;
 for(int i=1; i<=n;i++)
 {
  a=a*i;
 }
 return a;



}


int ncr(int n , int r){

int numi= factorial(n);
int dinom= factorial(r)*factorial(n-r);
return numi/dinom;




}
int main(int argc, char const *argv[])
{
  int n,r;
 cout<<"Enter the number n and r"<<endl ;
 cin>>n>>r;
 cout<<"ncr is " <<ncr(n,r)<<endl;

  return 0;
}
