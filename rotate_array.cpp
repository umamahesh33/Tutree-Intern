/*Q2. Program for array rotation.

Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.
Rotation of the above array by 2 will make array

Input: arr[] = {1,2,3,4,5,6}, n = 6, d = 2
Output: arr[] = {3,4,5,6,1,2}

*/


#include<iostream>
using namespace std;

void rotate(int arr[],int d,int n)
{
	int temp[d],i=0,j=0;
	while(i<d)
	{
		temp[i]=arr[i];
		arr[i]=arr[i+d];
		i++;
	}
	while(i>=d and i<n-d)
	{
		arr[i]=arr[i+d];
		i++;
	}
	for (i=n-d;i<n;i++)
	{
		arr[i]=temp[j++];
	}
	cout<<"array is :";
	for (i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={1,2,3,5,6,8,12};
	int d=2;
	int n=sizeof(arr)/sizeof(arr[0]);
	rotate(arr,d,n);
	return 0;
}
