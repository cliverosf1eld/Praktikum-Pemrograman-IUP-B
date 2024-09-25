#include <iostream>
#include <vector>
#include <algorithm>  

std::vector<int> reverseVector(const std::vector<int>& input) {
    std::vector<int> reversed(input);
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    int n;
    
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> vec(n);
    
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i]; 
    }

    std::vector<int> reversedVec = reverseVector(vec);

    std::cout << "Reversed Vector: ";
    for (int i : reversedVec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
