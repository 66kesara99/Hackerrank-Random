#include <bits/stdc++.h>

using namespace std;

struct Node
{
     int data;
     struct Node *next;
};

void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}

Node* InsertTail(Node *head,int data)
{
  // Complete this method
    Node* ret = head;
    
    Node* n = (Node*)malloc(sizeof(Node));
    n -> data = data;
    n -> next = NULL;
    
    if (head != NULL){
        while (head -> next != NULL) {
            head = head->next;
        }
        head -> next = n;
        return ret;
    } else {
        head = n;
        return head;
    }
}

Node* InsertHead(Node* head, int data){

    Node *n = (Node*)malloc(sizeof(Node));
    n -> data = data;
    n -> next = head;

    return n;
}

Node* Delete(Node *head, int position){
    if (position == 0){
	Node* temp = head;
	head = head -> next;
	free(temp);
	return head;
	
    } else {
	Node* ret = head;
	for (int i = 0; i<position-1; i++){
	    head = head -> next;
	}
	Node* temp = head -> next;
	head -> next = head -> next -> next;
	free(temp);
	return ret;
    }

}

int main(){
    
}
