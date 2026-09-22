#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

void insertatEnd(Node *&head, int value) {
  Node *newNode = new Node();
  newNode->data = value;
  newNode->next = nullptr;
  if (head == nullptr) {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void deletatStart(Node *&head) {
  if (head == nullptr) {
    cout << "List is empty" << endl;
    return;
  }
  Node *temp = head;
  head = head->next;
  delete temp;
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
    insertatEnd(head, arr[i]);
    cout << arr[i] << " -> ";
  }
  cout << "NULL" << endl;

  deletatStart(head);
  display(head);

  return 0;
}