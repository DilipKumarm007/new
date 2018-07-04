#include<iostream>
using namespace std;

void merge(int arr[],int first,int middle,int last)
{
	int i=0,j=0,k=0;
	int arrlenftom = middle - first+1;
       	int arrlenmtol = last - middle;	
	int Left[arrlenftom],Right[arrlenmtol];
	for(i = 0;i<arrlenftom;i++)
		Left[i] = arr[first + i];
	for(j = 0;j<arrlenmtol;j++)
		Right[j] = arr[middle+j+1];
	i=0;j=0;k=first;

	while(i<arrlenftom && j<arrlenmtol)
	{
		if(Left[i]<=Right[j])
		{
			arr[k]=Left[i];
			i++;
		}
		else
		{
			arr[k]=Right[j];
			j++;
		}
		k++;
	}
	for(;i<arrlenftom;i++) 
	{
		arr[k]=Left[i];
		k++;
	}
	for(;j<arrlenmtol;j++)
	{
		arr[k]=Right[j];
		k++;
	}
}

void mergesort(int arr[],int first,int last)
{
	if(first<last) {
		int middle = first + (last-first)/2;
		mergesort(arr,first,middle);
		mergesort(arr,middle+1,last);
		merge(arr,first,middle,last);
	}
}

int main()
{
	int arr[] = {9,5,6,1,4,2,3,8,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,len-1);
	for(int i=0;i<len;i++) cout<< " "<<arr[i];
	cout<<endl;
}
