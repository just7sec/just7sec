#include <iostream>

using namespace std;

const int TABLE_SIZE = 100;

struct HashNode {
    string key;
    int value;
    HashNode* next;
    
    HashNode(string k, int v) : key(k), value(v), next(nullptr) {}
};

class HashTable {
private:
    HashNode* table[TABLE_SIZE];

    int hashFunction(string key) {
        int hash = 0;
        for (char c : key) {
            hash = (hash * 31 + c) % TABLE_SIZE;
        }
        return hash;
    }

public:
    HashTable() {
        for (int i = 0; i < TABLE_SIZE; i++)
            table[i] = nullptr;
    }

    void insert(string key) {
        int index = hashFunction(key);
        HashNode* node = table[index];
        
        while (node) {
            if (node->key == key) {
                node->value++;
                return;
            }
            node = node->next;
        }

        node = new HashNode(key, 1);
        node->next = table[index];
        table[index] = node;
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            HashNode* node = table[i];
            while (node) {
                cout << node->key << ": " << node->value << endl;
                node = node->next;
            }
        }
    }
};

int main() {
    HashTable hashTable;
    string words[] = {"apple", "banana", "apple", "orange", "banana", "apple"};
    int n = 6;

    for (int i = 0; i < n; i++) {
        hashTable.insert(words[i]);
    }

    hashTable.print();
    return 0;
}
