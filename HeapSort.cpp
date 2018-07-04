#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
	int largest = i;
	int l = 2*i+1;
	int r = 2*i+2;

	if(l<n && arr[l]>arr[largest])
		largest = l;
	if(r<n && arr[r]>arr[largest])
		largest = r;
	if(largest != i)
	{
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);		
	}
}

void heapsort(int arr[],int n)
{
	for(int i= n/2-1;i>=0;i--)
		heapify(arr,n,i);
	for(int j = 0;j<n;j++)
                cout<<" "<<arr[j];
	cout<<endl;
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		cout<<endl;
		for(int j = 0;j<n;j++)
			cout<<" "<<arr[j];	
		heapify(arr,i,0);
	}
}


int main()
{
	int arr[] = {12,10,11,9,5,2,4,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	heapsort(arr,n);
	cout<<endl;
	for(int i = 0;i<n;i++)
		cout<<" "<<arr[i];
}
