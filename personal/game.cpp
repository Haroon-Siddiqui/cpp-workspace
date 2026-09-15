#include <iostream>

#include <string>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main ()
{
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


string monsterName;
int selectedMonster;
    cin >> selectedMonster;
        cout << "You have selected Monster number : " << selectedMonster << endl;

cout << "Name your monster: " << endl;
cin >> monsterName;
    cout << "Your Monster has been named : "<< monsterName << endl;       

    return 0;
}