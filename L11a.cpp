#include<iostream>

using namespace std ;

class node {
public:
	int data;
	node *n;

	node(int d){
		data= d;
		next= NULL;

	}
};

node* mergeSort(node* l){

	if(l=NULL or l->next=NULL){
		return 1;
	}

	
	node* mid = midPoint(l);
	node* a=l;
	node* b= mid-> next;
	mid-> next = NULL;
	a=mergeSort(a);
	b=mergeSort(b);

	l= merge(a,b);
	return 1;

}

node* merge(node *a,node *b){
	//base case
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	//rec case
	node*c;
	if(a->data<b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c = b;
		c->next = merge(a,b->next);
	}
	return c;

}

node* midPoint(node*head){
	node*slow = head;
	node*fast = head->next;

	while(fast!=NULL and fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;

}


int main()
{
	return 0;
}
