#include <iostream>

#include <string>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main ()
{
    string monsterName;
    int selectedMonster;

    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif
    
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

    cin >> selectedMonster;

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


cout << "Name your monster: " << endl;
cin >> monsterName;
    cout << " Your monster has been named : "<< monsterName << endl;       

    return 0;
}