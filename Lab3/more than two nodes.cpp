#include<iostream>
using namespace std;
class Node{
	private:	
	int data;
	Node *next;
		
	public:
	Node *head;
	
	Node(){
		head = NULL;
	}
	
	void insert_end(int n){
		
		if(head==NULL)
		{
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
			
		  Node *p,*temp;
		  temp=head;
		  while(temp->next!=NULL)
		  {
		  	temp=temp->next;
		  }
		   
		  p=new Node();
		  p->data=n;
		  p->next= NULL;
		  temp->next=p;
		   	
		}		
	}
	
	void display()
	{
	Node *temp;
	temp=head;
	if(temp==NULL)
	{
		cout << " \nNo data is in the list.."<<endl;
		return;
	}
	else{
		
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	
    }	
	
};

int main()
{
	Node n;
    n.insert_end(1);
    n.insert_end(2);
    n.insert_end(20);
    n.insert_end(30);
    n.insert_end(2004);
    n.display();
	return 0;
	
}
