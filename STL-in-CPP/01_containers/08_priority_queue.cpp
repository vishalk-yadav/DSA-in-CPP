#include <queue>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(20);

    cout << "Max heap:\n";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << ' ';
        maxHeap.pop();
    }
    cout << '\n';

    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);

    cout << "Min heap:\n";
    while (!minHeap.empty()) {
        cout << minHeap.top() << ' ';
        minHeap.pop();
    }
    cout << '\n';
}
