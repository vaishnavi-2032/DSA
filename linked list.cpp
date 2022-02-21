#include <iostream>
using namespace std;


class Node{
    public:
	int data;
	Node* next;
	
	Node()
	{
		this->next = NULL;
	}
	
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
	
	Node* add(Node* head,int data)
	{
		if(head == NULL)
		{
			head = new Node(data);
		}
		else
		{
			Node* temp =head;
			
			while(temp->next)
			{
				temp = temp->next;
			}
			temp->next = new Node(data);
			
		}
		
		return head;
	}
	
	
	void removeloop(Node* head)
	{
		Node* fp =head;
		Node* sp =head;
		
		while(fp && fp->next)
		{
			sp = sp->next;
			fp = fp->next->next;
			
			if(fp == sp)break;
		}
		
		if(fp == sp)
		{
			sp = head;
			
			if(fp==sp){
				while(fp->next!=sp)
				{
					fp = fp->next;
				}
			}
			else{
			 	while(fp->next!=sp->next)
				{
					fp = fp->next;
					sp = sp->next;
				}
			}
			
			fp->next = NULL;
		}
		
	}
	
	
	void print(Node*head)
	{
		Node* temp =head;
			
		while(temp)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
			
		cout<<endl;
		
	}
};









int main()
{
	Node* head = NULL;
	head = head->add(head,1);
	head = head->add(head,2);
	head = head->add(head,3);
	head = head->add(head,4);
	
	Node* temp =head;
			
	while(temp->next)
	{
		temp = temp->next;
	}
	temp->next=head;
	
	//head->print(head);
	
	head->removeloop(head);
	head->print(head);	
	return 0;
}
