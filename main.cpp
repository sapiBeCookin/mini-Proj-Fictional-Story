#include <iostream>
#include <string>

using std::string;

int leftPath(int &health)
{
    int choice;
    int damage {0};

    std::cout << "\nYou chose the left road. Further ahead, there is a dragon, and on the ground there are two objects:" << std::endl
              << "1. sword, 2. pistol." << std::endl << std::endl
              << "Choose one: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "Great choice! The sword is the best weapon to fight a dragon!" << std::endl;
        break;
    case 2:
        damage = 1;
        std::cout << "Hmm, not a great choice. You manage to kill the dragon but it causes " << damage << " damage!" << std::endl;
        break;
    default:
        std::cout << "What did you select? Choose a valid item!" << std::endl << std::endl;
        break;
    }

    health -= damage;
    return health;
}

int centerPath(int &health)
{
    int choice;
    int damage {0};

    std::cout << "\nYou chose the center road. Further ahead, there's a giant bear, and on the ground there are two objects:" << std::endl
              << "1. bow and arrow, 2. net." << std::endl << std::endl
              << "Choose one: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "Great choice! Bow and arrow are the best weapons to fight a giant bear!" << std::endl;
        break;
    case 2:
        damage = 3;
        std::cout << "Hmm, not a good choice. You manage to kill the bear but it causes " << damage << " damage!" << std::endl;
        break;
    default:
        std::cout << "What did you select? Choose a valid item!" << std::endl << std::endl;
        break;
    }

    health -= damage;
    return health;
}

void rightPath()
{
    std::cout << "You chose the right road, which is the correct one. Well done!" << std::endl;
}

int downhillPath(int &health)
{
    int choice;
    int damage {0};

    std::cout << "\nYou chose the downhill path. Further ahead, there's a poisonous snake, and on the ground there are two objects:" << std::endl
              << "1. shovel, 2. axe." << std::endl << std::endl
              << "Choose one: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        damage = 7;
        std::cout << "\nHmm, not a good choice. You manage to kill the snake but it causes " << damage << " damage!" << std::endl;
        break;
    case 2:
        std::cout << "\nGreat choice! The axe is the best weapon to fight a poisonous snake!" << std::endl;
        break;
    default:
        std::cout << "What did you select? Choose a valid item!" << std::endl << std::endl;
        break;
    }

    health -= damage;
    return health;
}

int main()
{
    bool loop = true;

    do
    {
        int choice;
        int playerHealth = 10;

        std::cout << "Hello and welcome to the magic forest! You are in a forest, and you have four roads in front of you:\n";
        std::cout << "1. Left\n2. Center\n3. Right\n4. Downhill" << std::endl;
        std::cout << "Which one do you choose? ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            leftPath(playerHealth);
            std::cout << "Ending #1: You defeated the dragon successfully, congratulations! You have " << playerHealth << " health remaining." << std::endl;
            loop = false;
            break;
        case 2:
            centerPath(playerHealth);
            std::cout << "Ending #2: You defeated the giant bear successfully, congratulations! You have " << playerHealth << " health remaining." << std::endl;
            loop = false;
            break;
        case 3:
            rightPath();
            loop = false;
            break;
        case 4:
            downhillPath(playerHealth);
            std::cout << "Ending #3: You defeated the poisonous snake successfully, congratulations! You have " << playerHealth << " health remaining." << std::endl;
            loop = false;
            break;
        default:
            std::cout << "Please choose a valid path (1 to 4): ";
            break;
        }
    } while (loop);

    return 0;
}
