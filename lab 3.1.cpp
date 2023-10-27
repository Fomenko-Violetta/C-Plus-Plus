//№23
#include <iostream>
using namespace std;
int maim() {
    int i;
    std::cout << "Введіть трьохзначне додатнє число N: ";
    std::cin >> i;

    if (i >= 100 && i <= 999) {
        int digit1 = i / 100;     
        int digit2 = (i / 10) % 10;
        int digit3 = i % 10;
        
        int count = 0;
        
        if (digit1 < 7) {
            count++;
        }
        if (digit2 < 7) {
            count++;
        }
        if (digit3 < 7) {
            count++;
        }
        
        std::cout << "Цифри, менші за 7: " << count << std::endl;
    } else {
        std::cout << "Введене число не є трьохзначним додатнім числом." << std::endl;
    }
    
    Enter:
    cout << " Enter value: ";
    cin >> i;
    
    if (i / 100 > 0 && i / 100 < 10) {
        
    }
    else {
        cout << "Please enter value from 100 to 999" << '\n';
        goto Enter;
    }
    return 0;
  }       

