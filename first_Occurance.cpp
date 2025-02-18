#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void first_Occurance(vector<int> arr,int target,int &ansIndex){
  int start=0;
  int end=arr.size()-1;
  ansIndex=-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        ansIndex=mid;
        end=mid-1;
    }
    else if(target<arr[mid]) end=mid-1;
    else start=mid+1;
  }
}
int main()
{
  vector<int> arr={20,20,20,30,40,50,60,70};
  int target=80;
  int ans;
  first_Occurance(arr,target,ans);
  cout<<ans<<endl;
}