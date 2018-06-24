#include<iostream>
using namespace std;

class Queue
{
	int Array[5];
	int Position=0;
public:
	void Insert()
	{
		int i =0;
		if(Position > 4) {
			cout<<"Array is full Read Some";
			return;
		}
		cout<< "\nEnter the number to Insert = ";
		cin>>i;
		cout<<"\nPosition = "<<Position;
		Array[Position] = i;
		Position+=1;
	}
	void Read()
	{
		if(Position == 0){
                        cout<<"Array is NULL Insert Some";
                        return;
                }
		cout<<"\n Queue Output"<<Array[Position-1];
		Position-=1;

	}
	void PrintArray()
	{
		cout<<"\nArray Output = ";
		for(int i=Position-1;i>=0;i--)
			cout<<Array[i]<<",";
		cout<<endl;
	}


};
int main()
{
	Queue obj;
	int i=0;
	while(1) {
		cout<<"Select the option: Insert = 1,Read = 2,PrintArray = 3 := ";
		cin>>i;
		switch(i){
			case(1): obj.Insert();break;
			case(2): obj.Read();break;
			case(3): obj.PrintArray();
			default: break;
		}
	}
}
