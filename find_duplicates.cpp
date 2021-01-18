/*Q2. Find duplicates in O(n) time and O(1) extra space.

Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

Input : n = 7 and array[] = {1, 2, 3, 6, 3, 6, 1} 
Output: 1, 3, 6 
Explanation: The numbers 1 , 3 and 6 appear more than once in the array. 

Input : n = 5 and array[] = {1, 2, 3, 4 ,3} 
Output: 3 
Explanation: The number 3 appears more than once in the array.
*/



#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void duplicates(int arr[], int size)
{
    int i;
    cout << "The duplicate elements are: ";
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 1, 3, 6, 6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    duplicates(arr, arr_size);
    return 0;
}
