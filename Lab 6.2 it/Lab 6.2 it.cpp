#include <iostream>
#include <vector>

int countnumbers(const std::vector<int>& a) {
    int count = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> a = { 2, 4, 7, 1, 9, 6, 3 };

    int oddCount = countnumbers(a);

    std::cout << "count of numbers: " << oddCount << std::endl;

    return 0;
}