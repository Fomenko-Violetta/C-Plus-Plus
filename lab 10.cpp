//1
#include <iostream>
#include <vector>
#include <algorithm>

void swap_min_max(std::vector<int>& arr) {
    auto minmax = std::minmax_element(arr.begin(), arr.end());
    std::iter_swap(minmax.first, minmax.second);
}

int main() {
    std::vector<int> arr = {10, 2, 3, 1, 5, 6, 7, 8, 9, 4};
    swap_min_max(arr);
    for(int i : arr) {
        std::cout << i << " ";
    }
    return 0;
}

//2
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int A;
    std::cout << "Введіть число A: ";
    std::cin >> A;

    std::vector<int> arr = {10, 2, 3, 1, 5, 6, 7, 8, 9, 4}; 
    int count = std::count_if(arr.begin(), arr.end(), A { return x > A; });

    std::cout << "Кількість елементів масиву, більших за " << A << ", становить: " << count;

    return 0;
}

//3
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5}; 

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Другий за величиною елемент: " << numbers[numbers.size() - 2] << std::endl;

    return 0;
}

//4
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 0, 4, 5}; 

    auto it = std::find(numbers.begin(), numbers.end(), 0);

    if (it != numbers.end()) {
        std::cout << "Номер першого нульового елемента: " << std::distance(numbers.begin(), it) << std::endl;
    } else {
        std::cout << "Масив не містить нульових елементів." << std::endl;
    }

    return 0;
}

