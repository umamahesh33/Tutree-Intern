/*Q1. Union and Intersection of two sorted arrays.

Given two sorted arrays, find their union and intersection.

Input : arr1[] = {1, 3, 4, 5, 7} arr2[] = {2, 3, 5, 6} 
Output :
Union : {1, 2, 3, 4, 5, 6, 7} 
Intersection : {3, 5} 

Input : arr1[] = {2, 5, 6} arr2[] = {4, 6, 8, 10} 
Output : 
Union : {2, 4, 5, 6, 8, 10} 
Intersection : {6}
*/


#include<iostream>
using namespace std;

void array_union(int arr1[],int arr2[],int s1,int s2)
{
	int i=0,j=0;
	cout<<"Union: ";
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			cout<<arr1[i]<<" ";
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			cout<<arr2[j]<<" ";
			j++;
		}
		else
		{
			cout<<arr2[j]<<" ";
			j++;
			i++;
		}
	}
		
		
		while(i<s1)
		{
			cout<<arr1[i]<<" ";
			i++;
		}
		while(j<s2)
		{
			cout<<arr2[j]<<" ";
			j++;
		}
}

void array_intersection(int arr1[],int arr2[],int s1,int s2)
{
	int i=0,j=0;
	cout<<"\nIntersection :";
	while(i<s1 && j<s2)
	{
		if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else
        { 
            cout << arr2[j] << " "; 
            i++; 
            j++; 
        }  
	}
}

int main()
{
	int arr1[]={1, 3, 4, 5, 7};
	int arr2[]={2,3,5,6};
	int size1=sizeof(arr1)/sizeof(arr1[0]);
	int size2=sizeof(arr2)/sizeof(arr2[0]);
	array_union(arr1,arr2,size1,size2);
	array_intersection(arr1,arr2,size1,size2);
	return 0;
	
}
