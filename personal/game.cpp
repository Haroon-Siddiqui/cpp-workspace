#include <iostream>

#ifdef _WIN32
    #include <windows.h>

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
                  .Dragon  (HP: 160 | DMG :12)
                  3.Zombie  (HP: 130 | DMG :17)
                  4.Slime   (HP: 120 | DMG :20)
                  5.Golem   (HP: 150 | DMG :15)
)"<<endl;

int selectedMonster;




    return 0;
}