#include<iostream>
#include<stack>
using namespace std;

class Stacklist 
{
	stack <int> Stackarray;
public:
	void Printlist()
	{
		cout<<"\nPrinting List\n";
		stack <int> Temp = Stackarray;
		while(!Temp.empty())
		{
			cout<<"	"<<Temp.top();
			Temp.pop();
		}
	}
	void PushintoStack()
	{
		int value;
		cout<<"\nEnter the value to insert = ";
		cin>>value;
		cout<<"\nPUSH operation\n";
		Stackarray.push(value);
	}
	void PopintoStack()
	{
		cout<<"\nPOP operation\n";
		if(!Stackarray.empty())
			Stackarray.pop();
	}
	void PrintTop()
	{
		if(!Stackarray.empty())
			cout<<"\n"<<Stackarray.top()<<endl;
	}
};

int main()
{
	int Selection;
	Stacklist obj;
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
