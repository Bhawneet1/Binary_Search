#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Dec_Binary_Search(vector<int> arr,int target){
  int start=0;
  int end=arr.size()-1;
  while(start<=end)
  {
    int mid=start+(end-start)/2;
    if(arr[mid]==target) return mid;
    else if(target<arr[mid]) start =mid+1;
    else end=mid-1;
  }
  return -1;
}
int main()
{
  vector<int> arr{100,90,80,70,60,50,40,30,20,10};
  int target=10;
  int ans=Dec_Binary_Search(arr,target);
  cout<<ans<<endl;
}