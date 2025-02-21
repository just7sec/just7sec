#include <iostream>

using namespace std;

class Queue {
private:
    int* arr;
    int front, rear, capacity, count;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
    }

    void enqueue(int value) {
        if (count == capacity) {
            cout << "Queue penuh!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        count++;
    }

    int dequeue() {
        if (count == 0) {
            cout << "Queue kosong!" << endl;
            return -1;
        }
        int value = arr[front];
        front = (front + 1) % capacity;
        count--;
        return value;
    }

    int peek() {
        if (count == 0) {
            cout << "Queue kosong!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return count == 0;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Elemen depan: " << q.peek() << endl;
    cout << "Mengeluarkan: " << q.dequeue() << endl;
    cout << "Mengeluarkan: " << q.dequeue() << endl;

    cout << (q.isEmpty() ? "Queue kosong" : "Queue tidak kosong") << endl;

    return 0;
}
