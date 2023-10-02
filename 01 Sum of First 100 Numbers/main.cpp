#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; ++i) {
        sum = sum + i;
    }

    std::cout << "Sum of 1-100 is: " << sum << std::endl;
    return 0;
}
