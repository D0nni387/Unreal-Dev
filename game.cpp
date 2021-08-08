#include <iostream>

int main()
{
    // On game load, displayed welcome message to user
    std::cout << "Waking up to the sound of your jail cell door unlocking, you leave to find the placed deserted \n";
    std::cout << "The only way you can escape is to get through some strange doors locked with number codes and puzzles \n";
    std::cout << "Splashed on the walls in what might be blood is the message, 'Three numbers is all i needed' \n";
    std::cout << "There is nobody around.... i wonder who did this?! \n \n";

    // Variables
    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 1;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;


    std::cout << "+ There are 3 numbers written on the floor this must be a clue to the code" << std::endl << "+ Adds to: ";
    std::cout << CodeSum << std::endl;
    std::cout << "+ Multiply to: ";
    std::cout << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << "+ Enter the 3 numbers seperated by a space to unlock the door: ";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    return 0;
}