#include <bits/stdc++.h>
using namespace std;

int getPivotIndex(vector<int> &arr)
{
    int s = 0;
    int n = arr.size();
    int e = n - 1;
    int mid;

    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] > arr[e])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binarySearch(int s, int e, int target, vector<int> &arr)
{
    int mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    if (n == 0)
    {
        return -1;
    }

    int pivotIndex = getPivotIndex(nums);

    if (nums[pivotIndex] <= target && target <= nums[n - 1])
    {
        return binarySearch(pivotIndex, n - 1, target, nums);
    }
    else
    {
        return binarySearch(0, pivotIndex - 1, target, nums);
    }
}

int main()
{
    vector<int> nums{10, 30, 70, 10, 20, 30};
    int target = 20;
    int ans = search(nums, target);
    cout << ans << endl;
}
