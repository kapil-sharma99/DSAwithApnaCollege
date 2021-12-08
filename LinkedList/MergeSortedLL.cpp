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

void display(node* head) {
  node* temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

node* merge(node* &head1, node* &head2) {
  node* p1 = head1;
  node* p2 = head2;

  node* dummyNode = new node(-1);
  node* p3 = dummyNode;

  while(p1 != NULL && p2 != NULL) {
    if(p1->data < p2->data) {
      p3->next = p1;
      p1 = p1->next;
    } else {
      p3->next = p2;
      p2 = p2->next;
    }
    p3 = p3->next;
  }

  while(p1 != NULL) {
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
  }

  while(p2 != NULL) {
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
  }

  return dummyNode->next;
}

node* mergeRecursive(node* head1, node* head2) {

  if(head1 == NULL) {
    return head2;
  }

  if(head2 == NULL) {
    return head1;
  }

  node* result;
  if(head1->data < head2->data) {
    result = head1;
    result->next = mergeRecursive(head1->next, head2);
  } else {
    result = head2;
    result->next = mergeRecursive(head1, head2->next);
  }
  return result;
}

int main() {
  node* head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 4);
  insertAtTail(head, 5);
  insertAtTail(head, 7);

  node* head2 = NULL;
  insertAtTail(head2, 2);
  insertAtTail(head2, 3);
  insertAtTail(head2, 6);

  display(head);
  display(head2);

  node* newHead = mergeRecursive(head, head2);
  display(newHead);

  return 0;
}