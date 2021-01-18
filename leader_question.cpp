/*1. Write a program to print all the LEADERS in the array. An element is leader if it is greater 
than all the elements to its right side. And the rightmost element is always a leader. For example int the 
array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.
*/


#include<iostream>
using namespace std;

void find_leader(int arr[],int arr_size)
{
	int leader;
	leader=arr[arr_size-1];
	cout<<"leader is:"<<leader;
	for(int i=arr_size-2;i>=0;i--)
	{
		if(leader<=arr[i])
		{
			leader=arr[i];
			cout<<"\nleader is:"<<leader;
		}
	}
}

int main()
{
	int arr[]={16, 17, 4, 3, 5, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	find_leader(arr,n);
	return 0;
}
