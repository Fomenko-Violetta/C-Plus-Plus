//№2, 23
#include <iostream>
#include <string>

int main() {
    int dayNumber;
    
    std::cout << "Введіть номер дня тижня: ";
    std::cin >> dayNumber;

    std::string schedule[5] = {
        "Понеділок: Математика, Фізика",
        "Вівторок: Хімія, Інформатика",
        "Середа: Історія, Література",
        "Четвер: Фізкультура, Англійська",
        "П'ятниця: Географія, Музика"
    };

    // Виведення розкладу пар для вибраного дня
    if (dayNumber >= 1 && dayNumber <= 5) {
        std::cout << "Розклад пар на цей день: " << schedule[dayNumber - 1] << std::endl;
    } else {
        std::cout << "Неправильний номер дня тижня. Введіть число від 1 до 5." << std::endl;
    }

    return 0;
}

//#1, 23
#include <iostream>

int main() {
    int N;
    std::cout << "Введіть трьохзначне число: ";
    std::cin >> N;

    if (N >= 100 && N <= 999) {  // Перевірка, що введене число трьохзначне
        int digit1 = N / 100;  // Отримання першої цифри
        int digit2 = (N / 10) % 10;  // Отримання другої цифри
        int digit3 = N % 10;  // Отримання третьої цифри

        int count = 0;  // Лічильник цифр, менших за 5

        if (digit1 < 5) {
            count++;
        }
        if (digit2 < 5) {
            count++;
        }
        if (digit3 < 5) {
            count++;
        }

        std::cout << "Перша цифра: " << digit1 << std::endl;
        std::cout << "Друга цифра: " << digit2 << std::endl;
        std::cout << "Третя цифра: " << digit3 << std::endl;
        std::cout << "Кількість цифр, менших за 5: " << count << std::endl;
    } else {
        std::cout << "Введене число не є трьохзначним." << std::endl;
    }

    return 0;
}

