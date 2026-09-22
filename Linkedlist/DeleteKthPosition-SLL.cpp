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

void deleteKthPosition(Node *&head, int k) {
  if (head == nullptr) {
    cout << "List is empty" << endl;
    return;
  }
  if (k == 1) {
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
  }
  Node *temp = head;
  int count = 0;
  while (temp != nullptr) {
    count++;
    if (count == k - 1) {
      Node *next = temp->next->next;
      delete temp->next;
      temp->next = next;
      break;
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
    cout << arr[i] << " -> ";
  }
  cout << "NULL" << endl;

  deleteKthPosition(head, 4);
  display(head);

  return 0;
}