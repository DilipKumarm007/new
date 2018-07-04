#include<iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
	int index = low-1;
	int pivot = high-1;
	for(int i = low;i<high;i++)
	{
		if(arr[pivot]>arr[i])
		{
			index++;
			swap(arr[index],arr[i]);
		}
	}
	index++;
	swap(arr[index],arr[high-1]);
	return index+1;
}

void quicksort(int arr[],int low,int high)
{
	if(low < high)
	{
		int pi = partition(arr,low,high);
		cout<<pi<<endl;
		quicksort(arr,low,pi-1);
		quicksort(arr,pi,high);
	}
}

int main()
{
	int arr[] = {10,80,30,90,40,50,70};
	int len = sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,len);
	for(int i =0;i<len ;i++) cout<<" "<<arr[i];
	cout<<endl;
}
