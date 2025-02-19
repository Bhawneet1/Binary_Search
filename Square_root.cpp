#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int square_root(int n)
{
  int s=0;
  int e=n;
  int ans=-1;
  //O(logn)
  while(s<=e)
  {
    long long int mid=s+(e-s)/2;
    long long int prod=mid*mid;
    if(prod==n) return mid;
    else if(prod > n)e=mid-1;
    else
    {
       ans=mid;
       s=mid+1;
    } 
  }
  return ans;
}
int main()
{
  int n=100;
  int ans = square_root(n);
  cout<<ans<<endl;
}