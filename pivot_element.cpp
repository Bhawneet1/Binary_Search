#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_pivot(vector<int> nums)
{
  int s=0;
  int e=nums.size()-1;
  while(s<=e)
  {
    int mid=s+(e-s)/2;
    if(nums[mid]>nums[mid+1]) return mid;
    if(nums[mid]<nums[mid-1]) return mid-1;
    if(nums[s]>nums[mid]) e=mid-1;//means baad waala sequence hai
    else s=mid+1;
  }
}
int main()
{
  vector<int> nums{50,60,70,10,20,30,40};
  int ans = find_pivot(nums);
  cout<<ans<<endl;
}