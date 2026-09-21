#include <iostream>
using namespace std;
int main ()
{
    int runsPerBall,n,totalRuns=0;
 
    // Displaing Mesages and taking input Using for loop ---------------    
    for ( n=1; n<=6; n++ ){

        cout<<"Enter Runs Scored on Ball no: "<< n <<endl;
    
       cin>> runsPerBall;
 
       // Calculating Total Runs of the over ---------------
       totalRuns =totalRuns + runsPerBall;
 
       //Displaying Custom Messages based on Runs Per Ball ---------------
        if (runsPerBall == 3){

           cout << "Fast Running Between the Wickets" <<endl;

         }
       else if (runsPerBall == 4){
          cout << "Nice! a Boundary" <<endl;
       }
       else if (runsPerBall == 6 ){

         cout <<"Wow! A sixer" <<endl;
       }
    }
 
    // Printing Total Score ---------------
    cout <<"Total Score is : "<< totalRuns <<endl;    
 
    // Displaying Custom Message based on Total Runs ---------------
    if (totalRuns >=18){
        cout << "Batters Smashed the bowler" <<endl;
    }
    else if (totalRuns > 6 && totalRuns < 18){
        cout << "Both Sides Kept the Ground" <<endl;
    }
    else if (totalRuns <= 6){
        cout <<"Tight Bowling From the bowler";
    }
          
}