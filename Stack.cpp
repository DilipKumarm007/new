#include<iostream>
#include<stack>
using namespace std;

class Stacklist 
{
	int* Stackarray;
	int Position =0 ;
	int length = 0;
public:
	void Printlist()
	{
		cout<<"\nPrinting List\n";
		int i =0;
		while(i<Position)
		{
			cout<<"	"<<Stackarray[i];
			i++;
		}
	}
	void PushintoStack()
	{
		if(Position>=length)
		{
			cout<<"\nArray is full Pop some value\n";
			return;
		}
		int value;
		cout<<"\nEnter the value to insert = ";
		cin>>value;
		cout<<"\nPUSH operation\n";
		Stackarray[Position] = value;
		Position +=1;
	}
	void PopintoStack()
	{
		cout<<"\nPOP operation\n";
		if(Position <=0)
		{
			cout<<"\nArray is Empty Push some values\n";
			return;
		}
		Position -= 1;
	}
	void PrintTop()
	{
		if(Position != 0)
			cout<<"\n"<<Stackarray[Position-1]<<endl;
	}
	void CreateArray()
	{
		cout<<"\nEnter the max Array length = ";
		cin>>length;
		Stackarray = new int[length];
	}
};

int main()
{
	int Selection;
	Stacklist obj;
	obj.CreateArray();
	while(1) {
		cout<<"\nSelect the operation. PushintoStack = 1 , PopintoStack = 2, Printlist = 3, PrintTop = 4 := ";
		cin>>Selection;
		switch(Selection){
			case (1) : obj.PushintoStack();break;
			case (2) : obj.PopintoStack();break;
			case (3) : obj.Printlist();break;
			case (4) : obj.PrintTop();break;
			default:break;
		}
	}
}
