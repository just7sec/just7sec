#include <iostream>

using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack penuh!" << endl;
            return;
        }
        arr[++top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack kosong!" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "Stack kosong!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Elemen teratas: " << s.peek() << endl;
    c
