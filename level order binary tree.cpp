#include<iostream>
#include<queue>
using namespace std;


class node{

public:
	int data;
	node* left;
	node* right;
	
	
	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
	
	void leveltraversal(node* root)
	{
		if(root==NULL)return;
		
		queue<node*>q;
		q.push(root);
		
		while(!q.empty())
		{
			
			node* temp = q.front();
			q.pop();
				
			if (temp->left != NULL)
          		  {
            		    q.push(temp->left);
        			  }
        			  
            		if (temp->right != NULL)
          		  {
        			    q.push(temp->right);
        			  }
				
			cout<<temp->data<<endl;
			
			
				
		}
	}
};


	


int main()
{
	node*root = new node(5);
	root->left = new node(7);
	root->right = new node(8);
	root->left->left = new node(9);
	root->left->right = new node(11);
	root->right->left = new node(13);
	root->right->right = new node(15);
	
	root->leveltraversal(root);
	
}
