#include <iostream>

int addNumber(int first_progam, int scond_program) {
    int result = first_progam + scond_program;
    return result;
}
int main() {
    int first_number = {3};
    int second_number = {4};
    std:: cout << "First number :" << first_number << std::endl;
    std:: cout << "Second number :" << second_number << std::endl;


    int sum = first_number + second_number;
    std:: cout << "sum : " << sum << std::endl;

    int result = addNumber(25,50);
    std:: cout << "result : " << result << std::endl;

    sum = addNumber(22,30);
    std:: cout << "sum : " << sum << std::endl;

    sum = addNumber(100,200);
    std:: cout << "sum : " << sum << std::endl;

    return 0;
}