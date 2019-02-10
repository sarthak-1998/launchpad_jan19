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

void insertAtMiddle(node* head , int d,int pos){

	node* ptr= head;
	while(pos-1){
		ptr= ptr-> next;
		pos--;
	}

	
	node* n = new node(data);
	n-> next = ptr -> next;
	ptr -> next = n;

}

// int search1(node* head, int key){

// }

void reverseList(node*&head){
	node * ptr->next=NULL;
	node* temp-> next =head;
	while(temp-> next!=NULL){

		ptr-> next = temp
		temp= temp-> next;
		ptr-> next = temp

	}
node * reverseListRecursive(node* head){

}

node* midPointList(node* head){
	node* ptr->


}

}


int main()
{
	return 0;
}
