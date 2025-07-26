/*
You have given two sorted arrays arr1[] & arr2[] of distinct elements. The first array has one element extra added in between. Return the index of the extra element.

Note: 0-based indexing is followed.

Examples

Input: a[] = [2,4,6,8,9,10,12], b[] = [2,4,6,8,10,12]
Output: 4
Explanation: In the first array, 9 is extra added and it's index is 4.
Input: a[] = [3,5,7,8,11,13], b[] = [3,5,7,11,13]
Output: 3
Explanation: In the first array, 8 is extra and it's index is 3.
Input: a[] = [3,5], b[] = [3]
Output: 1
Explanation: In the first array, 5 is extra and it's index is 1.
*/

class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        
        int start=0, end=b.size();
        int mid = 0;
        while(start <= end){
            int mid = (start + end) / 2;
            
            if(a[mid] == b[mid]){
                start = mid+1;
            }
            else if(a[mid] != b[mid]){
                end = mid - 1;
            }
            
        }
        return start;
    }
};
