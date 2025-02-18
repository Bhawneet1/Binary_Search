#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peak_index(vector<int> nums)
{
  //O(n)
  int maxi=INT_MIN;
  int max_index=-1;
  for(int i=0;i<nums.size();i++)
  { 
    if(nums[i]>maxi)
    {
        maxi=nums[i];
        max_index=i;
    }
  }
  return max_index;
}
int peak_index_optimized(vector<int> nums)
{
  //O(logn)
  int s=0;
  int e=nums.size()-1;
  while(s<e)
  {
    int mid=s+(e-s)/2;
    if(nums[mid]<nums[mid+1]) s=mid+1;
    else e=mid;//because answer can be on mid;
  }
  return s;//as all e ,s,mid lie on same block
}
int main()
{
  vector<int> nums{10,40,90,80,70,60,50,30,20};
  int ans =peak_index(nums);
  cout<<ans<<endl;

  int ans2=peak_index_optimized(nums);
  cout<<ans2<<endl;
}