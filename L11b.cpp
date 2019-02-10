#include<iostream>

using namespace std ;

class node {
public:
	int data;
	node *next;

	node(int d){
		data= d;
		next= NULL;

	}
};

node* alternatingMerge(node* l){

	if (a==NULL){
		return l;
	}
	node* t;
	node* c= l;
	t= l-> next;

	b->next = temp;

	node* mid = midPoint(l);
	node* a=l;
	node* temp;
	while (temp-> next== NULL){

		temp= temp-> next;
	}
	node* b= temp;
	mid-> next = NULL;
	

	l= merge(a,b);
	return l;





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


node* mergeSort(node* l){

	if(l==NULL or l->next==NULL){
		return l;
	}


	node* mid = midPoint(l);
	node* a=l;
	node* b= mid-> next;
	mid-> next = NULL;
	a=mergeSort(a);
	b=mergeSort(b);

	l= merge(a,b);
	return l;

}


int main()
{

	
	return 0;
}
