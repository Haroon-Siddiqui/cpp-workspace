#include <iostream>

#include <string>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

void showdisplayScreen ()

{

    // Display the ASCII art and monster selection menu

    cout << R"(
███╗   ███╗ ██████╗ ███╗   ██╗███████╗████████╗███████╗██████╗
████╗ ████║██╔═══██╗████╗  ██║██╔════╝╚══██╔══╝██╔════╝██╔══██╗
██╔████╔██║██║   ██║██╔██╗ ██║███████╗   ██║   █████╗  ██████╔╝
██║╚██╔╝██║██║   ██║██║╚██╗██║╚════██║   ██║   ██╔══╝  ██╔══██╗
██║ ╚═╝ ██║╚██████╔╝██║ ╚████║███████║   ██║   ███████╗██║  ██║ 
╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝
    

                B A T T L E   S I M U L A T O R


    Choose your Monster!

                  1.Wolf    (HP: 100 | DMG :25)
                  2.Dragon  (HP: 160 | DMG :12)
                  3.Zombie  (HP: 130 | DMG :17)
                  4.Slime   (HP: 120 | DMG :20)
                  5.Golem   (HP: 150 | DMG :15)
)"<<endl;
}


int main ()
{
// Set the console output code page to UTF-8 for proper display of special characters
    string monsterName;
    int selectedMonster;

    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

showdisplayScreen();

// Prompt the user to select a monster

cin >> selectedMonster;

// Check the selected monster and display the corresponding name

if (selectedMonster == 1 )
{
        cout << "You Have Selected Wolf! \n";
}
    else if (selectedMonster == 2)
{
        cout << "You Have Selected Dragon! \n";
}
    else if (selectedMonster == 3)
{
        cout << "You Have Selected Zombie! \n";
}
    else if (selectedMonster == 4)
{
        cout << "You Have Selected Slime! \n";
}
    else if (selectedMonster == 5) 
{
        cout << "You Have Selected Golem! \n";
}
    else
{
        cout << "Invalid Selection! Please select a valid monster number. \n";
        return 0;
}


// Prompt the user to name their monster

cout << "Name your monster: " << endl;
cin >> monsterName;
    cout << " Your monster has been named : "<< monsterName << endl;       

    return 0;
}