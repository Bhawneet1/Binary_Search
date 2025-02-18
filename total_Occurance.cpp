#include <bits/stdc++.h>
using namespace std;
void first_Occurance(vector<int> arr, int target, int &ansIndex)
{
  int start = 0;
  int end = arr.size() - 1;
  ansIndex = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      ansIndex = mid;
      end = mid - 1;
    }
    else if (target < arr[mid])
      end = mid - 1;
    else
      start = mid + 1;
  }
}
void find_last_Occurance(vector<int> arr, int target, int &ans)
{
  int start = 0;
  int end = arr.size() - 1;
  ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (target == arr[mid])
    {
      ans = mid;
      start = mid + 1;
    }
    else if (target < arr[mid])
      end = mid - 1;
    else
      start = mid + 1;
  }
}

vector<int> searchRange(vector<int> &arr, int target)
{
  int firstOccuranceIndex = -1;
  first_Occurance(arr, target, firstOccuranceIndex);
  int lastOccuranceIndex = -1;
  find_last_Occurance(arr, target, lastOccuranceIndex);
  vector<int> ans;
  ans.push_back(firstOccuranceIndex);
  ans.push_back(lastOccuranceIndex);
  return ans;
}
int total_Occurance(vector<int> &arr, int target)
{
  int firstOccuranceIndex = -1;
  first_Occurance(arr, target, firstOccuranceIndex);
  int lastOccuranceIndex = -1;
  find_last_Occurance(arr, target, lastOccuranceIndex);
  return (lastOccuranceIndex-firstOccuranceIndex+1);
}
int main()
{
  vector<int> arr{10, 20, 20, 20, 20, 20, 20, 30};
  int target = 20;
  int ans=total_Occurance(arr,target);
  cout<<ans<<" ";

}