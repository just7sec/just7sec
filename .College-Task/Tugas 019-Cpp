#include <iostream>

using namespace std;

class MinHeap {
private:
    int* heap;
    int capacity;
    int size;

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[parent] > heap[index]) {
                swap(heap[parent], heap[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        int left, right, smallest;
        while (true) {
            left = 2 * index + 1;
            right = 2 * index + 2;
            smallest = index;

            if (left < size && heap[left] < heap[smallest])
                smallest = left;
            if (right < size && heap[right] < heap[smallest])
                smallest = right;

            if (smallest != index) {
                swap(heap[index], heap[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }

public:
    MinHeap(int cap) {
        capacity = cap;
        size = 0;
        heap = new int[capacity];
    }

    void insert(int val) {
        if (size < capacity) {
            heap[size] = val;
            heapifyUp(size);
            size++;
        } else if (val > heap[0]) {
            heap[0] = val;
            heapifyDown(0);
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }

    ~MinHeap() {
        delete[] heap;
    }
};

int main() {
    MinHeap heap(3);
    int nums[] = {10, 20, 5, 8, 70, 30, 100};
    int n = 7;

    for (int i = 0; i < n; i++) {
        heap.insert(nums[i]);
    }

    cout << "Top 3 terbesar: ";
    heap.print();

    return 0;
}
