#include<bits/stdc++.h>
using namespace std;
void find_last_Occurance(vector<int> arr,int target,int &ans){
  int start=0;
  int end=arr.size()-1;
  ans=-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(target==arr[mid]){
      ans=mid;
      start=mid+1;
    }
    else if(target<arr[mid])end=mid-1;
    else start=mid+1;
  }
}
int main()
{
  vector<int> arr{10,20,20,20,20,20,20,20,20,30};
  int target=20;
  int ans;
  find_last_Occurance(arr,target,ans);
  cout<<ans;
}