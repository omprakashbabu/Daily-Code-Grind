// Swap the array elements
// Difficulty: EasyAccuracy: 64.61%Submissions: 91K+Points: 2Average Time: 15m
// Given an array arr of positive integers. The task is to swap every ith element of the array with (i+2)th element.

// Examples :

// Input: arr[] = [1, 2, 3]
// Output: [3, 2, 1]
// Explanation: Swapping 1 and 3, makes the array [3, 2, 1]. There is only one swap possible in this array.
// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [3, 4, 5, 2, 1]
// Explanation: Swapping 1 and 3, makes the array [3, 2, 1, 4, 5]. Now, swapping 2 and 4, makes the array [3, 4, 1, 2, 5]. Again,swapping 1 and 5, makes the array [3, 4, 5, 2, 1].

/*Function to swap array elements
 * arr : array input
 */
class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        // Your code here
        int temp;
        int n = arr.size();
        
        for(int i=0;i<n-2;i++){
            temp = arr[i+2];
            arr[i+2] = arr[i];
            arr[i] = temp;
        }
    }
};
