#include <iostream>
#include <string>

#ifdef _WIN32
    #include <windows.h>
#endif

void showWelcomeScreen()
{
    //Welcome screen
    std::cout << "███╗   ███╗ ██████╗ ███╗   ██╗███████╗████████╗███████╗██████╗\n";
    std::cout << "████╗ ████║██╔═══██╗████╗  ██║██╔════╝╚══██╔══╝██╔════╝██╔══██╗\n";
    std::cout << "██╔████╔██║██║   ██║██╔██╗ ██║███████╗   ██║   █████╗  ██████╔╝\n";
    std::cout << "██║╚██╔╝██║██║   ██║██║╚██╗██║╚════██║   ██║   ██╔══╝  ██╔══██╗\n";
    std::cout << "██║ ╚═╝ ██║╚██████╔╝██║ ╚████║███████║   ██║   ███████╗██║  ██║\n";
    std::cout << "╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝\n";
    std::cout << "\n";
    std::cout << "                   B A T T L E    S I M U L A T O R \n\n\n";
    
    std::cout << "                    Choose your monster!\n";

    std::cout << "                    1. Dragon (HP 120 ATK 12)\n";
    std::cout << "                    2. Wolf   (HP 90 ATK 16)\n";
    std::cout << "                    3. Slime  (HP 150 ATK 30)\n";
    std::cout << "                    4. Golem  (HP 180 ATK 7)\n";
}

std::string identifySelectedMonster(int selectedMonster)
{
     //Identify selected monster
    if( selectedMonster == 1 )
    {
        return "Dragon";
    }
    else if( selectedMonster == 2 )
    {
        return "Wolf";
    }
    else if( selectedMonster == 3 )
    {
        return "Slime";
    }
    else if( selectedMonster == 4 )
    {
        return "Golem";
    }
    else 
    {   
        return "";
    }

}

int getMonsterHP(int selectedMonster)
{
    if( selectedMonster == 1 )
    {
        return 120;
    }
    else if( selectedMonster == 2 )
    {
        return 90;
    }
    else if( selectedMonster == 3 )
    {
        return 150;
    }
    else if( selectedMonster == 4 )
    {
        return 180;
    }
    else 
    {   
        return 0;
    }
}

int getMonsterAttack(int selectedMonster)
{
    if( selectedMonster == 1 )
    {
        return 12;
    }
    else if( selectedMonster == 2 )
    {
        return 16;
    }
    else if( selectedMonster == 3 )
    {
        return 30;
    }
    else if( selectedMonster == 4 )
    {
        return 7;
    }
    else 
    {   
        return 0;
    }
}

void startAdventure( 
    std::string monsterType, 
    std::string monsterName, 
    int monsterHP, 
    int monsterAttack )
{
    //clear the terminal
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif

    std::cout << "Adventure has started!\n";

    std::cout << "Monster Type:" << monsterType << "\n";
    std::cout << "Monster Name:" << monsterName << "\n";
    std::cout << "HP:" << monsterHP << "\n";
    std::cout << "Attack:" << monsterAttack << "\n";

    std::cout << "Walking...";

}


int main()
{
    //Prevent strange characters
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    showWelcomeScreen();

    //variable declarations
    int selectedMonster;
    std::string monsterName;

    //Selecting the monster
    std::cin >> selectedMonster;

    std::string monsterType = identifySelectedMonster(selectedMonster);

    if( monsterType == "")
    {
        //End the program if invalid input
        std::cout << "INVALID INPUT";    
        return 0;
    }

    int monsterHP = getMonsterHP(selectedMonster);
    int monsterAttack = getMonsterAttack(selectedMonster);

    //Naming the selected monster
    std::cout << "Enter monster's name:";
    std::cin >> monsterName;

    startAdventure( monsterType, monsterName, monsterHP, monsterAttack );

    return 0;
}