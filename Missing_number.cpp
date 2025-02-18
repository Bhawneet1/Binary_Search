#include<bits/stdc++.h>
using namespace std;
int Missing_number_BS(vector<int> arr)
{
  //O(nlogn)
  sort(arr.begin(),arr.end());
  int start=0;
  int end=arr.size()-1;
  int ans=-1;
  while(start<=end)
  {
    int mid=start+(end-start)/2;
    int diff=arr[mid] - mid;
    if(diff ==0) start =mid+1;
    else if(diff==1){
      ans=mid;
      end=mid-1;
    }
  }
  if(ans ==-1)
  {
    return arr.size()-1;
  }
  return ans;

}
int main()
{
//  vector<int> arr{3,5,6,0,7,2,1,8};
 vector<int> arr{3,0,1};
 int ans=Missing_number_BS(arr);
 cout<<ans;
}