#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

class Stack {
  int N;
  queue<int> q1;
  queue<int> q2;

  public:
    Stack() {
      N = 0;
    }

    void pop() {
      if(q1.empty()) {
        return;
      }

      while(q1.size() != 1) {
        q2.push(q1.front());
        q1.pop();
      }

      q1.pop();
      N--;

      queue<int> temp = q1;
      q1 = q2;
      q2 = temp;
    }

    void push(int val) {
      q1.push(val);
      N++;
    }

    int top() {
      if(q1.empty()) {
        return -1;
      }

      while(q1.size() != 1) {
        q2.push(q1.front());
        q1.pop();
      }

      int answer = q1.front();
      q2.push(answer);

      queue<int> temp = q1;
      q1 = q2;
      q2 = temp;

      return answer;
    }

    int size() {
      return N;
    }
};

int main() {
  Stack st1;

  st1.push(1);
  st1.push(2);
  st1.push(3);
  st1.push(4);

  cout << st1.top() << endl;
  st1.pop();
  cout << st1.top() << endl;
  return 0;
}