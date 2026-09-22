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

void insertbyValue(Node *&head, int ele, int value) {
  Node *newNode = new Node();
  newNode->data = ele;
  newNode->next = nullptr;
  if (head && head->data == value) {
    newNode->next = head;
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next) {
    if (temp->next->data == value) {
      newNode->next = temp->next;
      temp->next = newNode;
      return;
    }
    temp = temp->next;
  }
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
  }

  insertbyValue(head, 7, 4);

  display(head);

  return 0;
}