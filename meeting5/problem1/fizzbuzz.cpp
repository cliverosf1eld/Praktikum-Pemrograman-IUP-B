#include <iostream>
#include <vector>
#include <string>

int main()
{
    int i;
    std::vector<std::string> fizzBuzzResults(100);
    
    for (i=0; i<100; i++) {
        int number = i+1;
        if (number % 3 == 0 && number % 5 == 0){
            fizzBuzzResults[i] = "FizzBuzz";
        }
        else if (number % 3 == 0){
            fizzBuzzResults[i] = "Fizz";
        }
        else if (number % 5 == 0){
            fizzBuzzResults[i] = "Buzz";
        }
        else {
            fizzBuzzResults[i] = std::to_string(number);
        }
    }
    for (const std::string & result : fizzBuzzResults) {
        std::cout << result << std::endl;
    }
    return 0;
}