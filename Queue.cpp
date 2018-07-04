#include<iostream>
#include<queue>
using namespace std;

class Qlist 
{
	int* Qarray;
	int Position=0;
	int length=0;
public:
	void Printlist()
	{
		cout<<"\nPrinting List\n";
		int i =0;
		while(i!=Position)
		{
			cout<<"	"<<Qarray[i];
			i++;
		}
	}
	void PushintoQ()
	{
		if(Position >= length)
                {
                        cout<<"\nArray is full Pop Some values";
                        return;
                }
		int value;
		cout<<"\nEnter the value to insert = ";
		cin>>value;
		cout<<"\nPUSH operation\n";
		int i = Position;
		while(i!=0)
		{
			Qarray[i] = Qarray[i-1];
			i--;
		}
		Qarray[0]=value;
		Position +=1;
	}
	void PopintoQ()
	{
		cout<<"\nPOP operation\n";
		if(Position <= 0)
		{
			cout<<"\nArray is Empty Push Some values\n";
                        return;
		}
		Position-=1;
	}
	void PrintFront()
	{
		if(Position <= 0)
                {
                        cout<<"\nArray is Empty Push Some values\n";
                        return;
                }
		cout<<"\n"<<Qarray[0]<<endl;
	}
	void PrintBack()
	{
		if(Position <= 0)
		{
			cout<<"\nArray is Empty Push Some values\n";
			return;
		}
		cout<<"\n"<<Qarray[Position-1]<<endl;
	}
	void CreateArray()
        {
                cout<<"\nEnter the max Array length = ";
                cin>>length;
                Qarray = new int[length];
        }
};

int main()
{
	int Selection;
	Qlist obj;
	obj.CreateArray();
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
