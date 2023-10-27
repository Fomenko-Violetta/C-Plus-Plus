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

