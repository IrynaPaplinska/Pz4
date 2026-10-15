#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> S; // Стек для зберігання рядків
    int count = 0;   // Змінна для підрахунку символів

    // Додаємо три рядки до стека
    S.push("apple");
    S.push("banana");
    S.push("cherry");

    // Створюємо допоміжний стек для збереження оригінального стека
    stack<string> tempStack;

    // Виведемо рядки та порахуємо символи, зберігаючи оригінальний стек
    while (!S.empty()) {
        string str = S.top(); // Отримати верхній елемент[cite: 2]
        count += str.length(); // Додати кількість символів[cite: 2]
        cout << str << endl;   // Вивести рядок
        
        tempStack.push(str);   // Зберігаємо у тимчасовий стек
        S.pop();               // Видалити верхній елемент з оригінального стека[cite: 2]
    }

    // Повертаємо елементи назад в оригінальний стек
    while (!tempStack.empty()) {
        S.push(tempStack.top());
        tempStack.pop();
    }

    cout << "Загальна кількість символів: " << count << endl; //[cite: 2]

    return 0;
}