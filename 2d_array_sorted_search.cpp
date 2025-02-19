#include <iostream>
#include <vector>

using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
  int rows = matrix.size();
  int columns = matrix[0].size();
  //total elements
  int n=rows*columns;
  
  int s=0;
  int e=n-1;
  while(s<=e)
  {
      int mid=s+(e-s)/2;
      int rowIndex=mid/columns;
      int colIndex=mid%columns;

      if(matrix[rowIndex][colIndex]==target){
          return true;
      }
      if(target > matrix[rowIndex][colIndex])
      {
          s=mid+1;
      }
      else
      {
          e=mid-1;
      }
  }
  return false;
}

int main() {
  vector<vector<int>> matrix = {
    {1, 3, 5, 7},
    {10, 11, 16, 20},
    {23, 30, 34, 60}
  };

  int target = 3;
  bool found = searchMatrix(matrix,target);

  if (found) {
    cout << "Target found in the matrix." << endl;
  } else {
    cout << "Target not found in the matrix." << endl;
  }

  return 0;
}