#include<iostream>

using namespace std;

int BinarySearch(int arr[],int value,int start,int len)
{
	if(len >= start)
	{
		int pos = -1;
		int mid = start + (len-start)/2;
		if(arr[mid] == value)
			return mid;
		if(arr[mid]>value)
			return BinarySearch(arr,value,0,mid-1);
		if(arr[mid]<value)
			return BinarySearch(arr,value,mid+1,len);
		
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	for(int i =0;i<len;i++)
		cout<<" "<<arr[i];
	cout<<endl;
	int result = BinarySearch(arr,1,0,len-1);
	if(result != -1)
		cout<<result<<endl;
	else
		cout<<"no such data"<<endl;
}
