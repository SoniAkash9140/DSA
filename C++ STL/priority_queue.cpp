#include <bits/stdc++.h>
using namespace std;

void explainPQ() {
    // Max-Heap
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << endl; // 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top() << endl; // 8

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5); // {5}
    minHeap.push(2); // {2, 5}
    minHeap.push(8); // {2, 5, 8}
    minHeap.emplace(10); // {2, 5, 8, 10}

    cout << minHeap.top() << endl; // 2
}

int main() {
    explainPQ();
    return 0;
}
