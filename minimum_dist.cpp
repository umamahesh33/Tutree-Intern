/*Q3. Find the minimum distance between two numbers.

Given an unsorted array arr[] and two numbers x and y, find the minimum distance between x and y in arr[]. The array might also contain duplicates. You may assume that both x and y are different and present in arr[].

Input: arr[] = {1, 2}, x = 1, y = 2 
Output: Minimum distance between 1 and 2 is 1. 
Explanation: 1 is at index 0 and 2 is at index 1, so the distance is 1 

Input: arr[] = {3, 4, 5}, x = 3, y = 5 
Output: Minimum distance between 3 and 5 is 2. 
Explanation:3 is at index 0 and 5 is at index 2, so the distance is 2 

Input: arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6 
Output: Minimum distance between 3 and 6 is 4. 
Explanation:3 is at index 0 and 6 is at index 5, so the distance is 4 

Input: arr[] = {2, 5, 3, 5, 4, 4, 2, 3}, x = 3, y = 2 
Output: Minimum distance between 3 and 2 is 1. 
Explanation:3 is at index 7 and 2 is at index 6, so the distance is 1
*/


#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
int minimum_dist(int arr[], int n, int x, int y) 
{ 
    int p = -1, min_dist = INT_MAX; 
      
    for(int i=0 ; i<n ; i++) 
    { 
        if(arr[i]==x || arr[i]==y) 
        { 
            if( p != -1 && arr[i] != arr[p]) 
                min_dist = min(min_dist , i-p); 
            p=i; 
        } 
    } 
    if(min_dist==INT_MAX) 
        return -1; 
  
    return min_dist; 
} 

int main() 
{ 
    int arr[] = {3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 3; 
    int y = 6; 
  
    cout << "Minimum distance between " << x <<" and " << y << " is "<<minimum_dist(arr, n, x, y) << endl; 
    return 0; 
} 
