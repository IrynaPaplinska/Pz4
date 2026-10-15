#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S; // Стек для зберігання цілих чисел[cite: 3]
    int sum = 0;  // Змінна для підрахунку суми[cite: 3]

    // Додаємо 5 чисел до стека (наприклад: 1, 2, 3, 4, 5)
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);

    // Витягнути усі числа з стека та обчислити суму[cite: 3]
    cout << "Елементи стека у зворотному порядку: ";
    while (!S.empty()) {
        int num = S.top(); // Отримати верхній елемент[cite: 3]
        cout << num << " "; // Вивести число[cite: 3]
        sum += num;        // Додати до суми[cite: 3]
        S.pop();           // Видалити верхній елемент[cite: 3]
    }

    cout << "\nСума чисел: " << sum << endl; //[cite: 3]

    return 0;
}