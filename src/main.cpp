#include <iostream>

int main() {

    int n = 4;
    int arr[n];
    arr[0] = 1;
    arr[1] = 4;
    arr[2] = 3;
    arr[3] = 2;

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    for (int i = n-1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    return 0;
}