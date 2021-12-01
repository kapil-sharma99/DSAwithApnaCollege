#include<iostream>
using namespace std;

class node {
  public:
    int data;
    node *next;

    node(int val) {
      data = val;
      next = NULL;
    };
};

void insertAtHead(node* &head, int val) {
  node* n = new node(val);
  n->next = head;
  head = n;
}

void insertAtTail(node* &head, int val) {

  node* n = new node(val);

  if(head == NULL) {
    head = n;
    return;
  }

  node* temp = head;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = n;
}

bool search(node* head, int key) {
  node* temp = head;
  while(temp != NULL) {
    if(temp->data == key) {
      return true;
    }
    temp = temp->next;
  }
  return false;
}

void display(node* head) {
  node* temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  
}

void deleteAtHead(node* &head) {
  if(head == NULL) {
    return;
  }
  node *toDelete = head;
  head = head->next;
  

  delete toDelete;
}

void deletion(node* &head, int val) {
  if(head == NULL) {
    return;
  }

  if(head->next == NULL) {
    deleteAtHead(head);
    return;
  }

  node* temp = head;
  while(temp->next->data != val) {
    temp = temp->next;
  }
  node* toDelete = temp->next;
  temp->next = temp->next->next;
  delete toDelete;

}

node* reverseUsingIteration(node* &head) {
  node* prevPtr = NULL;
  node* currPtr = head;
  node* nextPtr;

  while(currPtr != NULL) {
    nextPtr = currPtr->next;
    currPtr->next = prevPtr;

    prevPtr = currPtr;
    currPtr = nextPtr;
  }

  return prevPtr;
}

node* reverseUsingRecursion(node* &head) {
  if(head == NULL || head->next == NULL) {
    return head;
  }
  node* newHead = reverseUsingRecursion(head->next);
  head->next->next = head;
  head->next = NULL;

  return newHead;
}

node* reverseK(node* &head, int k) {
  node* prevPtr = NULL;
  node* currPtr = head;
  node* nextPtr;

  int counter = 0;

  while(currPtr != NULL && counter < k) {
    nextPtr = currPtr->next;
    currPtr->next = prevPtr;
    prevPtr = currPtr;
    currPtr = nextPtr;
    counter++;
  }
  if(nextPtr != NULL) {
    head->next = reverseK(nextPtr, k); 
  }
  return prevPtr;
}

int main() {
  node* head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  insertAtTail(head, 4);
  insertAtTail(head, 5);
  insertAtTail(head, 6);
  insertAtTail(head, 7);
  insertAtTail(head, 8);

  insertAtHead(head, 10);

  cout << "Before Deletion: " << endl;
  display(head);
  deletion(head, 4);
  deleteAtHead(head);
  cout << "After Deletion: " << endl;
  display(head);

  cout << search(head, 10) << endl;

  node* newHead = reverseUsingRecursion(head);
  cout << "After reversing: " << endl;
  display(newHead);


  node* head1 = NULL;
  insertAtTail(head1, 1);
  insertAtTail(head1, 2);
  insertAtTail(head1, 3);
  insertAtTail(head1, 4);
  insertAtTail(head1, 5);
  insertAtTail(head1, 6);
  insertAtTail(head1, 7);
  insertAtTail(head1, 8);
  cout << "Before K reversal: " << endl;
  node* nowNewHead = reverseK(head1, 2);
  cout << "After K reversal: " << endl;
  display(nowNewHead);
  return 0;
}