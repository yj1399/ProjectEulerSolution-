#include<bits/stdc++.h>
using namespace std;
long long int fib(int n) { 
  double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n) / sqrt(5)); 
} 
  
// Driver Code 
int main () 
{
  long long int s=0;
  long long int l= 33;
 // cout<<fib(33);
   for (int i=1;i<=l;i++){
       long long int y=fib(i);
       if(y%2==0){
            s=s+y;
       }
  }
  cout<<s<<endl;
} 
/*
 for (int i=1;i<=l;i++){
       long long int y=fib(i);
       if(y%2==0){
            s=s+y;
       }
  }
 */