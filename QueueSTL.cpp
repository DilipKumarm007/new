#include<iostream>
#include<queue>
using namespace std;

class Qlist 
{
	queue <int> Qarray;
public:
	void Printlist()
	{
		cout<<"\nPrinting List\n";
		queue <int> Temp = Qarray;
		while(!Temp.empty())
		{
			cout<<"	"<<Temp.front();
			Temp.pop();
		}
	}
	void PushintoQ()
	{
		int value;
		cout<<"\nEnter the value to insert = ";
		cin>>value;
		cout<<"\nPUSH operation\n";
		Qarray.push(value);
	}
	void PopintoQ()
	{
		cout<<"\nPOP operation\n";
		if(!Qarray.empty())
			Qarray.pop();
	}
	void PrintFront()
	{
		cout<<"\n"<<Qarray.front()<<endl;
	}
	void PrintBack()
	{
		if(!Qarray.empty())
			cout<<"\n"<<Qarray.back()<<endl;
	}
};

int main()
{
	int Selection;
	Qlist obj;
	while(1) {
		cout<<"\nSelect the operation. PushintoQ = 1 , PopintoQ = 2, Printlist = 3, PrintFront = 4, PrintBack = 5 := ";
		cin>>Selection;
		switch(Selection){
			case (1) : obj.PushintoQ();break;
			case (2) : obj.PopintoQ();break;
			case (3) : obj.Printlist();break;
			case (4) : obj.PrintFront();break;
			case (5) : obj.PrintBack();break;
			default:break;
		}
	}
}
