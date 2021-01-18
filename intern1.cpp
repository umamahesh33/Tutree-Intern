#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)  
{  
    int i, key, j,k; 
	int new_arr[n];
	new_arr[0]=arr[0];
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        
        while (j >= 0 && arr[j] > key) 
        {  
            new_arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        new_arr[j + 1] = key;
		
		k=i+1;
		if(k%2==0)
		{
			int sum=0;
			int result;
			for (int x=0;x<k;x++)
			{
				sum=sum+new_arr[x];
			}
			result=sum/2;
			cout<<"median is:"<<result<<endl;
		}
		else if(k%2!=0)
		{
			int num = (k-1)/2;
			cout<<"median is:"<<new_arr[num]<<endl;
		}
    }  
}  

int main()
{
	int arr[]={5,10,6,12,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	return 0;
}
