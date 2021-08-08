#include <iostream>

int main()
{
    // On game load, displayed welcome message to user
    std::cout << "Waking up to the sound of your jail cell door unlocking, you leave to find the placed deserted \n";
    std::cout << "The only way you can escape is to get through some strange doors locked with number codes and puzzles \n";
    std::cout << "Splashed on the walls in what might be blood is the message, 'Three numbers is all i needed' \n";
    std::cout << "There is no body around.... i wonder who did this?! \n \n";

    // Variables
    int a = 4;
    int b = 3;
    int c = 1;

    int sum = a + b + c;
    int product = a * b * c;


    std::cout << "+ There are 3 numbers written on the floor this must be a clue to the code" << std::endl << "+ Adds to: ";
    std::cout << sum << std::endl;
    std::cout << "+ Multiply to: ";
    std::cout << product;

    return 0;
}