#include <stdio.h> 
#include<vector>
#include <limits.h>

void find_two_smallest(int arr[], int arr_size) 
{ 
    int i, first, sec; 
  
    if (arr_size < 2) 
    { 
        printf(" Invalid Input "); 
        return; 
    } 
  
     first =INT_MAX; 
	 sec = INT_MAX; 
    for (i = 0; i < arr_size ; i++) 
    { 
        if (arr[i] < first) 
		{
         sec = first;
         first = arr[i];
        }
	    else if (arr[i] < sec && arr[i] != first) 
            sec = arr[i];
    } 
    printf("The smallest element is %d and second Smallest element is %d\n", first, sec); 
} 
  
int main() 
{ 
    int arr[] = {12, 13, 1, 10, 34, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    find_two_smallest(arr,n); 
    return 0; 
} 
