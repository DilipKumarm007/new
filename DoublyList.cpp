#include<iostream>
#include<stack>
using namespace std;

struct List
{
	int data;
	struct List* next;
	struct List* previous;
};

class MyClassList 
{
	struct List* Top=NULL;
public:
	void Printlist()
	{
		if(Top == NULL)
		{
			cout<<"\nList is NULL"<<endl;
			return;
		}
		struct List* temp = Top;
		cout<<"\nPrinting List\n";
		while(temp != NULL)
		{
			cout<<" "<<temp->data;
			temp = temp->next;
		}
	}
	void PushintoList()
	{
		int value;
		cout<<"\nEnter the value to insert = ";
		cin>>value;
		cout<<"\nPUSH operation\n";
		struct List* temp = new struct List;
		if(Top == NULL)
		{
			temp->data = value;
			temp->next = NULL;
			temp->previous = NULL;
			Top = temp;
		}
		else
		{
			struct List* temp1 = Top;
			while(temp1->next != NULL) temp1 = temp1->next;
			temp->data = value;
                        temp->next = NULL;
			temp->previous = temp1;
			temp1->next = temp;
		}
	}
	void PopfromList()
	{
		if(Top == NULL) 
		{
			cout<<"\nList is Empty Push Some value"<<endl;
			return;
		}
		cout<<"\nPOP operation\n";
		if(Top->next == NULL) 
		{
			delete Top;
			Top = NULL;
			return;
		}
		struct List* temp = Top;
		while(temp->next != NULL)temp=temp->next;
		temp->previous->next = NULL;
		delete temp;
	}
	void PrintFirstElement()
	{
		if(Top == NULL)
		{
			cout<<"\nList is Empty Push Some value"<<endl;
                        return;
		}
		cout<<"\n"<<Top->data<<endl;
	}
	void PrintLastElement()
	{
		if(Top == NULL)
                {
                        cout<<"\nList is Empty Push Some value"<<endl;
                        return;
                }
		struct List* temp = Top;
                while(temp->next != NULL)temp=temp->next;
		cout<<"\n"<<temp->data<<endl;
	}
	void DeleteGivenValue()
	{
		int value;
                cout<<"\nEnter the value to be Deleted = ";
                cin>>value;
                cout<<"\nDeleting a value from List\n";
                struct List* temp = Top;
		if(Top->data == value)
		{
			Top = Top->next;
			delete temp;
			return;
		}
		else
		{
			while(temp!=0)
			{
				if(temp->data == value)
				{
					temp->previous->next = temp->next;
					temp->next->previous = temp->previous;
					struct List* temp1 = temp->previous;
					delete temp;
					temp = temp1;
				}
				temp = temp->next;
			}
		}
	}
};

int main()
{
	int Selection;
	MyClassList obj;
	while(1) {
		cout<<"\nSelect the operation. PushintoList = 1, PopfromList = 2, Printlist = 3, PrintFirstElement = 4, PrintLastElement = 5 := ";
		cin>>Selection;
		switch(Selection){
			case (1) : obj.PushintoList();break;
			case (2) : obj.PopfromList();break;
			case (3) : obj.Printlist();break;
			case (4) : obj.PrintFirstElement();break;
			case (5) : obj.PrintLastElement();break;
			default:break;
		}
	}
}
