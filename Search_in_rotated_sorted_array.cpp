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
int binary_search(vector<int> nums,int s,int e,int target)
{
  while(s<=e)
  {
    int mid=s+(e-s)/2;
    if(nums[mid]==target)return mid;
    else if(nums[mid]>target) e=mid-1;
    else s=mid+1;

  }
  return -1;
}
int main()
{
  vector<int> nums{50,60,70,10,20,30,40};
  int ans = find_pivot(nums);
  int target=20;
  // line A -> index 0 to pivotindex
  // line B -> index pivotindex to n-1
  // if target in line A then serach in line A
  int n=nums.size();
  if(target >nums[0] && target <nums[ans])
  {
    int ans=binary_search(nums,0,ans,target);
    cout<<ans;
  }
  //target in line B
  
  else if(target>nums[ans+1] && target < nums[n-1]){
      int ans=binary_search(nums,ans+1,n-1,target);
      cout<<ans;
  }
}