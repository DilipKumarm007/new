#include<iostream>
#include<stack>
using namespace std;

class Stacklist 
{
	int* Stackarray;
	int Position;
	int length;
public:
	Stacklist(int len = 10)
	{
		length = len;
		Position = 0;
		Stackarray = new int[length];
	}
	Stacklist(const Stacklist &obj)
	{
		length = obj.length;
		Position= obj.Position;
		Stackarray = new int[length];
		for(int i=0;i<=Position;i++) Stackarray[i]=obj.Stackarray[i];
	}
	bool PushintoStack(int value)
	{
		if(Position>=length)
		{
			return false;
		}
		Stackarray[Position] = value;
		Position +=1;
		return true;
	}
	bool PopintoStack()
	{
		if(Position <=0)
		{
			return false;
		}
		Position -= 1;
		return true;
	}
	int PrintTop()
	{
		if(Position != 0)
			return Stackarray[Position-1];
		return 0;
	}
	
	bool empty()
	{
		if(Position == 0)
			return true;
		return false;
	}
	~Stacklist()
	{
		delete[] Stackarray;
	}
				
};

void Printlist(Stacklist obj)
{
        while(!obj.empty())
        {
        	cout<<" "<<obj.PrintTop();
            	obj.PopintoStack();
        }
}


int main()
{
	int Selection;
	Stacklist obj(10);
	while(1) {
		cout<<"\nSelect the operation. PushintoStack = 1 , PopintoStack = 2, Printlist = 3 := ";
		cin>>Selection;
		switch(Selection){
			case (1) :   int value;
                		cout<<"\nEnter the value to insert = ";
                		cin>>value;
				if(obj.PushintoStack(value)==false) cout<<"\nStack is full\n";break;
			case (2) : if(obj.PopintoStack()==false)
				   	cout<<"\nStack is NULL\n";
				   break;
			case (3) : Printlist(obj);break;
			default:break;
		}
	}
	obj.~Stacklist();
}
