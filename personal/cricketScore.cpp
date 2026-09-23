#include <iostream>
using namespace std;

main ()
{
    system ("color 0B");

    int runsPerBall,n,totalRuns=0;
 
    // Displaing Mesages and taking input Using for loop ---------------    
    for ( n=1; n<=6; n++ ){
        
        cout<<"Enter Runs Scored on Ball no: "<< n <<endl;
    
       cin>> runsPerBall;
 
       // Calculating Total Runs of the over ---------------
       totalRuns =totalRuns + runsPerBall;
 
       //Displaying Custom Messages based on Runs Per Ball ---------------
       if (runsPerBall == 1){
           cout <<endl <<"A single" <<endl <<endl;
       } 
       else if (runsPerBall == 2){
           cout <<endl << "They sped up for the double" <<endl <<endl; 
       }
       else if (runsPerBall == 3){
           cout <<endl << "Fast Running Between the Wickets" <<endl <<endl;
         }
       else if (runsPerBall == 4){
          cout <<endl << "Nice! a Boundary" <<endl <<endl;
       }
       else if (runsPerBall == 5){
          cout <<endl <<"Five for the Batting Team" <<endl <<endl;
       }
       else if (runsPerBall == 6 ){
         cout <<endl <<"Wow! A sixer" <<endl <<endl;
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