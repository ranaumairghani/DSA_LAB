#include<iostream>
using namespace std;
class Node{
	private:	
	int data;
	Node *next;
		
	public:
	Node *head;
	
	Node(){
		head=NULL;
	}
	
	void insert_beg(int n){
		
		if(head==NULL){
	
		 head=new Node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else{
			
		  Node *p;
		  p=new Node();
		  p->data=n;
		  p->next= head;
		  head=p;
		   	
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
    n.insert_beg(1);
    n.insert_beg(2);
    n.insert_beg(20);
    n.insert_beg(30);
    n.insert_beg(50);
    n.display();
	return 0;
	
}
