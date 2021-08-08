#include <iostream>

void PrintIntroduction(int Difficulty)
{
    if (Difficulty == 1)
    {
        // On game load, displayed welcome message to user
        std::cout << "\n Waking up to the sound of your jail cell door unlocking, you leave to find the placed deserted \n";
        std::cout << "The only way you can escape is to get through some strange doors locked with number codes and puzzles \n";
        std::cout << "Splashed on the walls in what might be blood is the message, 'Three numbers is all i needed' \n";
        std::cout << "There is nobody around.... i wonder who did this?! \n\n";
    }
    else
    {
        std::cout << "The next door terminal reads core level " << Difficulty << std::endl;
        std::cout << " I'm closer now \n\n";
    }
}

bool PlayGame(int Difficulty)
{

    PrintIntroduction(Difficulty);

    // Variables
    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 1;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers written on the floor this must be a clue to the code \n"
              << "+ Adds to: ";
    std::cout << CodeSum;
    std::cout << "\n+ Multiply to: ";
    std::cout << CodeProduct;

    // Store Player Guesses
    int GuessA, GuessB, GuessC;
    std::cout << "\n+ Enter the 3 numbers seperated by a space to unlock the door: ";
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the correct answer is inputted
    if (CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        std::cout << "The door flies open, sounds of sirens sound in the distance. There's more ahead, one step closer \n";
        return true;
    }
    else
    {
        std::cout << "The door seals shut, what more can you do? The door controls are flashing and no matter how much jabbing it doesn't respond \n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    const int MaxDifficulty = 8; 

    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    return 0;
}
