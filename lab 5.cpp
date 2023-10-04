#include <iostream>
#include <string>

int main() {
 double x;
    
    std::cout << "Введіть п'ять різних значень аргументу x:\n";
    for (int i = 1; i <= 5; i++) {
        std::cout << "Значення " << i << ": ";
        std::cin >> x;
        
        double y = (sin(5 * x) * sqrt(fabs(sin(5 * x)))) / (5 * x);
        
        std::cout << "Значення функції при x = " << x << ": " << y << "\n";
    }
    
    int product_of_multiples_of_4 = 1;
    for (int i = 4; i < 40; i += 4) {
        product_of_multiples_of_4 *= i;
    }
    std::cout << "Добуток чисел, кратних 4 і менших за 40: " << product_of_multiples_of_4 << std::endl;
    
 double a, b, h;
    
    std::cout << "Введіть початок відрізка a: ";
    std::cin >> a;
    
    std::cout << "Введіть кінець відрізка b: ";
    std::cin >> b;
    
    std::cout << "Введіть крок h: ";
    std::cin >> h;
    
    std::cout << "-------------------\n";
    std::cout << ": X : Y :\n";
    std::cout << "-------------------\n";
    
    for (double x = a; x <= b; x += h) {
        if (x >= 0 && x <= 10) {
            double y = sqrt(sin(x)) + pow(x, 2);
            std::cout << ": " << x << " : " << y << " :\n";
            std::cout << "-------------------\n";
        } else {
            std::cout << ": " << x << " : Значення x не належить ОДЗ :\n";
            std::cout << "-------------------\n";
        }
    }
    
  return 0;  

}