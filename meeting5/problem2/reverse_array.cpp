#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> reverseVector(const std::vector<int>& input) 
    {
    std::vector<int> reversed(input);
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
    }
int main ()
{
    std::vector<int> vec = {2, 4, 6, 8, 10};
    std::vector<int> reversedVec = reverseVector(vec);
     std::cout << "Reversed Vector: ";
    for (int i : reversedVec) 
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}