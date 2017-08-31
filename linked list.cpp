#include<iostream>
using namespace std;
class node2
{
	public:
	int data;
	node2 *next;
};
class node1
{
	public:
		node2 *temp;//NODE2=TYPE
		node2 *start=NULL;
		node2 *newnode;
	void createnode() //AGE AGE NODE BNEGI
	{
		newnode=new node2();//NEW NODE BNEGI JISKA NAME NEWNODE HAI
		cin>>newnode->data;//PHLE MAI DATA HOGA
		newnode->next=NULL;//SECOND MAI HMESHA NULL HOGA
	}
	void insertion_in_end()//UPAR NODE BNI THI YHA INSERT HOGI
	{
		int n;
		cout<<"Enter the number of elements:";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			createnode();//CALL HOKE JITNI BAR BULANA UTNI NODES BNEGI
			if(start==NULL)
			{
				start=newnode;//JO NODE BANI HAI VO START MAI JAYEGI
			}
			else
			{
				temp=start;
				while(temp->next!=NULL)
					temp=temp->next;
				temp->next=newnode;
			}
		}
	}
	void display()
	{
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp=temp->next;
		}
	}
};
int main()
{
	node1 n;
	n.insertion_in_end();
	n.display();
}
