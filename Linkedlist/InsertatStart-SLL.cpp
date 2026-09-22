#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

void insertatstart(Node *&head, int value) {
  Node *newNode = new Node();
  newNode->data = value;
  newNode->next = head;
  head = newNode;
}

void display(Node *head) {
  Node *temp = head;
  while (temp) {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {
  Node *head = nullptr;

  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++) {
    insertatstart(head, arr[i]);
  }

  display(head);

  return 0;
}