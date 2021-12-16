#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
      data = val;
      next = NULL;
    }
};

class Queue {
  Node* front;
  Node* back;

  public:
    Queue() {
      front = NULL;
      back = NULL;
    }

    void push(int x) {
      Node* n = new Node(x);
      if(front == NULL) {
        front = n;
        back = n;
        return;
      }
      back->next = n;
      back = n;
    }

    void pop() {
      if(front == NULL) {
        cout << "Queue Underflow!!" << endl;
        return;
      }
      Node* toDelete = front;
      front = front->next;
      delete toDelete;
    }

    int peek() {
      if(front == NULL) {
        cout << "No element in Queue!!" << endl;
        return -1;
      }
      return front->data;
    }

    bool empty() {
      if(front == NULL) {
        return true;
      }
      return false;
    }
};

int main() {
  Queue q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  cout << q.peek() << endl; 
  q.pop();
  cout << q.peek() << endl; 
  q.pop();
  cout << q.peek() << endl; 
  q.pop();
  cout << q.peek() << endl; 
  q.pop();
  cout << q.peek() << endl; 
  q.pop();
  cout << q.peek() << endl; 
  q.pop();
  cout << q.peek() << endl; 
  q.pop();
  cout << q.empty()   << endl;
  return 0;
}