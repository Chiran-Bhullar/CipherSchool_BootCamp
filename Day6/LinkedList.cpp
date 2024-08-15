// Linked List 

// Adding Element at the Begining

#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

    Node (int val)
  {
	data = val;
	next = NULL;
  }


};

void
insertAtTail (Node * &head, int val)
{

  //Creating a new node in which dara feild will have val and next will point at NULL

  Node *n = new Node (val);

  //if there is no node in LL

  if (head == NULL)
	{
	  head = n;
	  return;
	}

  //Iterate LL from begin to end with a pointer which is initially point at head

  Node *temp = head;

  while (temp->next != NULL)
	{
	  temp = temp->next;
	}
  temp->next = n;
}

void insertAtHead (Node * &head, int val)
{
  Node *n = new Node (val);

  n->next = head;
  head = n;
}

bool search(Node* head, int key){
    
    Node *temp = head;
    
    while(temp != NULL){                                                                                                                                                                        
        if(temp->data == key){
            return true;
        }
        
        temp = temp->next;
    }
    return false;
}

void deletion(Node* &head, int val){
    Node* temp = head;
    
    while(temp -> next -> data != val){
        temp = temp->next;
    }
    
    Node* toDelete = temp->next;
    delete toDelete;
}

void deleteAtHead(Node* head){
    Node* nodetodelete = head;
    
    
    
}

void display (Node * head)
{
  // Taking a pointer because we will not modify head.

  Node *temp = head;
  while (temp != NULL)
	{
	  cout << temp->data << " -> ";
	  temp = temp->next;
	}
  cout << "NULL" << endl;
}

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next;
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

int main ()
{
  Node *head = NULL;
  insertAtTail (head, 1);
  insertAtTail (head, 2);
  insertAtTail (head, 3);
  insertAtTail (head, 1);
  display (head);
  cout<<endl;
  insertAtHead(head, 10);
  insertAtHead(head, 12);
  

  display (head);
  cout<<endl;
  cout<<search(head, 3)<< endl;
  cout<<search(head, 2)<<endl;
  display (head);
  cout<<endl;
  deletion(head, 3);
  cout<<endl;
  display(head);
  
  reverse(head);
  display(head);

}
