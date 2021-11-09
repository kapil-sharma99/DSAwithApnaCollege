#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> v;
  v.push_back(5);
  v.push_back(4);
  v.push_back(3);
  v.push_back(2);
  v.push_back(1);

  //Method-1 for printing vectors
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  //Method-2 for printing vectors
  vector<int>::iterator it;
  for(it=v.begin(); it!=v.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  //Method-3 for printing vectors
  for(auto element:v) {
    cout << element << " ";
  }
  cout << endl;

}