#include<iostream>
using namespace std;
class SingleDimentionalArray
{
	int Array[10];
public:
	void InsertData()
	{
		for(int i =0;i<10;i++)
			Array[i] = i;
	}
	void Printoutput()
	{
		for(int i =0;i<10;i++)
			cout<<Array[i]<<",";
		cout<<endl;
	}	
	
};

class TwoDimentionalArray
{
        int Array[5][2];
public:
        void InsertData()
        {
		int k=0;
                for(int i =0;i<5;i++)
			for(int j=0;j<2;j++)
                        	Array[i][j] = k++;
        }
        void Printoutput()
        {
                for(int i =0;i<5;i++)
			for(int j=0;j<2;j++)	
                        	cout<<"["<<i<<","<<j<<"] = "<<Array[i][j]<<endl;
                cout<<endl;
        }

};


int main()
{
	SingleDimentionalArray obj;
	obj.InsertData();
	obj.Printoutput();
	TwoDimentionalArray obj1;
        obj1.InsertData();
        obj1.Printoutput();
	return 0;
}
