#include <bits/stdc++.h>
using namespace std;

//^ There are three approaches to solve the problem of finding the missing number in an array of size n containing numbers from 0 to n.

/* //& Approach 1:
    ->Sort the array and check the index and the value at that index.If they are not equal, then the missing number is the index.
    ->Time Complexity: O(nlogn) due to sorting.
    ->Space Complexity: O(1) as we are not using any extra space.
*/
/* //& Approach 2:
    ->Use a hash set to store the numbers in the array.
    ->Iterate from 0 to n and check if the number is present in the hash set.
    ->If not present, return that number.
    ->Time Complexity: O(n) for iterating through the array and checking the hash set.
    ->Space Complexity: O(n) for storing the numbers in the hash set.
*/
/* //& Approach 3:
    ->Use the formula for the sum of the first n natural numbers: n*(n+1)/2.
    ->Calculate the sum of the numbers in the array.
    ->The missing number will be the difference between the expected sum and the actual sum.
    ->Time Complexity: O(n) for iterating through the array.
    ->Space Complexity: O(1) as we are not using any extra space.
*/
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int totalSum = (n * (n + 1)) / 2;
    int elementSum = 0;
    for (int i = 0; i < n; i++)
    {
        elementSum += nums[i];
    }
    if (totalSum != elementSum)
        return totalSum - elementSum;
    return 0;
}
int main()
{
    vector<int> nums = {3, 0, 1};
    int result = missingNumber(nums);

    cout << "The missing number is: " << result << endl;

    return 0;
}