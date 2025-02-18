#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool Binary_Search(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    //(s+e)/2 can lead to integer overflow therefore we use s+(e-s)/2;
    //if both s and e are INT_MAX therefore give unexpected result as out of range 
    while(start<=end){
      if(arr[mid]==target) return true;
      else if(arr[mid]>target) end=mid-1;
      else start=mid+1;
      mid=start+(end-start)/2;//bohot jaroori hai as always update mid after 1 iteraation
    }
    return false;
}
int main()
{
  //Binary Search O(logn)
  //Search only when monotonic function(either increasing or decreasing)
  //break array in two parts using start and end using mid
  vector<int> arr{1,4,6,8,9};
  int target=9;
  bool ans = Binary_Search(arr,target);
  if(ans)
  {
    cout<<"Found"<<endl;
  }
  else
  {
    cout<<"Not found"<<endl;
  }
}