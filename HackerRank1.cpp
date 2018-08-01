#include<iostream>
#include<string>
using namespace std;

void isstringvalidorinvalid(int x,int i)
{
	int count[10] = {0};
	if((x==0)&&(i==0))
		return;
	x=x*i;
	char* temp;
	
	while(x/10)
	{
		count[x%10]=1;
		x/=10;
	}
	while(i/10)
	{
		if(count[i%10]==1)
		{
			cout<<"i = "<<i<<endl;
			cout<< "NotValid"<<endl;
			return;
		}
		i/=10;
	}
	
	cout<<"Valid"<<endl;
}

void isintvalidornot(int x,int i)
{
	int k = x*i;
	while(i/10)
	{
		x=k;
		while(x/10)
		{
			if((x%10)==(i%10))
			{
				cout<<"Not Valid"<<endl;
				return;	
			}
			x = x/10;
		}
		i= i/10;
	}
	cout<<"Valid"<<endl;
}

int main()
{

	int x = 0,y=0,z=0;
	cout<<"Enter the Number x = ";
	cin>>x;
	cout<<"Enter the Number y = ";
	cin>>y;
	cout<<"Enter the Number z = ";
        cin>>z;
	for(int i = y;i<=z;i++)
	{
		isintvalidornot(x,i);
	}
}
