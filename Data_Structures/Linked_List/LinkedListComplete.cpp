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

void ReversePrint(Node *head)
{

    if (head == NULL){
        return;
    } else {
        Node *current = NULL;
        Node *temp = NULL;
        while (current != head){
            temp = head;
            while (temp -> next != current){
                temp = temp->next;
            }
            cout << temp->data << endl;
            current = temp;
        }
        
    }
}

Node* Reverse(Node *head)
{

    Node *ret = NULL;
    if (head == NULL){
        return NULL;
    } else {
        Node *curHead, *newHead;
        newHead = NULL;
        curHead = head;
        while(curHead != NULL){
            Node *temp = curHead;
            curHead = curHead -> next;
            temp -> next = newHead;
            newHead = temp;
        }
        return newHead;
    }
}

int CompareLists(Node *headA, Node* headB)
{
    
    if (headA == NULL && headB == NULL){
        return 1;
    } else if ((headA == NULL && headB != NULL) || (headA != NULL && headB == NULL)) {
        return 0;
    } else {
        while (headA != NULL && headB != NULL){
            if (headA -> data != headB -> data){
                return 0;
            }
            headA = headA -> next;
            headB = headB -> next;
        }
        if (headA == headB){
            return 1;
        } else {
            return 0;
        }
    }
}

Node* MergeLists(Node *headA, Node* headB)
{
    
    if (headA == NULL){
        return headB;
    } else if (headB == NULL){
        return headA;
    } else {
        Node *ret = NULL;
        if (headA -> data > headB -> data){
            ret = headB;
            headB = headB -> next;
        } else {
            ret = headA;
            headA = headA -> next;
        }
        Node *temp = ret;
        while (headA != NULL && headB != NULL){
            if (headA -> data > headB -> data){
                temp -> next = headB;                
                headB = headB -> next;
            } else {
                temp -> next = headA;
                headA = headA -> next;
            }
            temp = temp -> next;
        }
        
        if (headA != NULL){
            temp -> next = headA;
        } else if (headB != NULL){
            temp -> next = headB;
        }
        return ret;
    }
}

int main(){
    
}
