#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;

int main() {
    string text = "apple banana apple orange banana apple";
    unordered_map<string, int> wordCount;

    stringstream ss(text);
    string word;
    
    while (ss >> word) {
        wordCount[word]++;
    }

    for (const auto &pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
