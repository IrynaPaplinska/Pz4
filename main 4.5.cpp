#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string word = "tenet";
    stack<char> S;

    for (char c : word) {
        S.push(c);
    }

    string reversedWord = "";

    while (!S.empty()) {
        reversedWord += S.top();
        S.pop();
    }

    cout << "Оригінал: " << word << endl;
    cout << "Навпаки: " << reversedWord << endl;

    if (word == reversedWord) {
        cout << "Результат: Рядок є паліндромом!" << endl;
    } else {
        cout << "Результат: Рядок НЕ є паліндромом." << endl;
    }

    return 0;
}