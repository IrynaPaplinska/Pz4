#include <iostream>
#include <stack>
#include <cstdlib> // Для rand() та srand()
#include <ctime>   // Для time()

using namespace std;

int main() {
    stack<int> S;
    const int size = 10;  // Максимальна місткість стека
    int sum = 0;          // Змінна для підрахунку суми чисел за критерієм
    int count = 0;        // Змінна для підрахунку кількості таких чисел

    srand(time(0));       // Ініціалізація генератора випадкових чисел

    // Генерація випадкових чисел у діапазоні від 1 до 20
    int min = 1;
    int max = 20;

    for (int i = 0; i < size; ++i) {
        int randomNum = min + rand() % (max - min + 1); // Випадкове число
        S.push(randomNum);
    }

    // Виведіть усі згенеровані числа та застосуйте критерій фільтрації
    cout << "Елементи стека (випадкові числа): " << endl;
    while (!S.empty()) {
        int num = S.top(); // Отримати верхній елемент
        S.pop();           // Видалити верхній елемент

        cout << num << " "; // Вивести число

        // Критерій фільтрації: парні числа в діапазоні від 10 до 20
        if (num >= 10 && num <= 20 && num % 2 == 0) {
            sum += num;    // Додати до суми
            count++;       // Збільшити лічильник
        }
    }
    cout << endl;

    // Обчислення та виведення середнього значення
    if (count > 0) {
        cout << "Середнє значення відібраних чисел: " << double(sum) / count << endl;
    } else {
        cout << "Чисел, що відповідають критерію, не знайдено." << endl;
    }

    return 0;
}