#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

class myclassbinarysearchtree
{
	struct node* newnode(int data)
        {
                struct node* temp = new struct node;
                temp->data = data;
                temp->left = temp->right = NULL;
                return temp;
        }
	public:
	myclassbinarysearchtree()
	{

	}

        void preordertraversal(struct node *root)
	{
		if(root != NULL)
		{
			cout<<root->data<< " ";
			preordertraversal(root->left);
			preordertraversal(root->right);
		}	
	}
        void inordertraversal(struct node *temp)
	{
                if(temp != NULL)
                {
                        inordertraversal(temp->left);
                        cout<<" "<<temp->data;
                        inordertraversal(temp->right);
                }
	}
        void postordertraversal(struct node *root)
	{
		if(root != NULL)
		{
			postordertraversal(root->left);
			postordertraversal(root->right);
			cout<<root->data<<" ";
		}
	}

	void levelordertraversal(struct node *root)
	{
		struct node* temp[8] = {NULL};
		int Position = 0;
		temp[Position] = root;
		while(Position!=-1)
		{
			cout<<temp[0]->data<<" ";
			if(temp[0]->left != NULL)
			{
				Position++;
				temp[Position] = temp[0]->left;
			}
			if(temp[0]->right != NULL)
			{
				Position++;
		       		temp[Position] = temp[0]->right;
			}
			int i =0;
			while(i	!= Position)
			{
				temp[i] = temp[i+1];
				i++;
			}
			Position--;
		}
		cout<<endl;
	}
	
	struct node* insert(struct node* temproot,int data)
	{
		if(temproot == NULL) return newnode(data);

		if(temproot->data>data) temproot->left = insert(temproot->left,data);
		else if(temproot->data<data) temproot->right = insert(temproot->right,data);
		return temproot;
	}
	~myclassbinarysearchtree()
        {
        }

};

int main()
{
	struct node * root=NULL;
	myclassbinarysearchtree obj;
	root = obj.insert(root,50);
	obj.insert(root,30);
	obj.insert(root,20);
	obj.insert(root,10);
        obj.insert(root,40);
	obj.insert(root,80);
        obj.insert(root,60);
	obj.insert(root,70);
	obj.insert(root,90);
        obj.insert(root,95);
	obj.insert(root,100);
	cout<<"levelordertraversal"<<endl;
	obj.levelordertraversal(root);
	cout<<"preordertraversal"<<endl;
	obj.preordertraversal(root);
	cout<<endl<<"inordertraversal"<<endl;
	obj.inordertraversal(root);
	cout<<endl<<"postordertraversal"<<endl;
	obj.postordertraversal(root);
	cout<<endl;
}
