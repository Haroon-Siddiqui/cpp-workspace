#include <iostream>

using namespace std;

int main() 
{
    double x , y;
    
    char op ;  
    
    cout << "Enter Two Numbers : ";
    
    cin >> x >> y ;
    
    cout << "Enter an operator (+, -, *, / ):";

    cin >> op;
    
    if (op == '+')
        {
            cout << "The sum of " << x << " and " << y <<" is " << x+y << "\n";
        }
    else if (op == '-')
        {
        cout << "The Difference of " <<x << " and " << y <<" is " << x-y << endl;
        }
    else if (op == '*')    
    {
        cout << " The product of " << x <<" and " << y <<" is " << x*y << endl ;
    }
    else if (op == '/')
    {
        if(y != 0)
            {
                cout << "The quotient of " << x <<" and " << y << " is " << x/y << endl ;
            }
        else
            {
                cout << " Division By zero is not allowed " << endl;
            }
    }
    else 

    
        cout <<" Invalid Operator " << endl;


}
/*
=====================================================================
🚀 CALCULATOR ROADMAP & FEATURE CHECKLIST
=====================================================================
[✓] Core Math: Addition (+), Subtraction (-), Multiplication (*), Division (/)
[✓] Core Logic: Checked for Division-by-Zero errors

[ ] 📐 LEVEL 1: MATH EXTENSIONS
    - [ ] Power Function (x^y) [Requires <cmath> pow()]
    - [ ] Modulus Operator (x%y) [Requires <cmath> fmod()]
    - [ ] Absolute Value (|x|) [Requires <cmath> abs()]

[ ] 🧠 LEVEL 2: SCIENTIFIC FUNCTIONS
    - [ ] Square Root (√x) [Requires negative input filtering]
    - [ ] Trigonometric Functions (sin, cos, tan) [Requires Degree-to-Radian math]
    - [ ] Factorial (x!) [Requires a loop or recursion mechanism]

[ ] 🔄 LEVEL 3: ARCHITECTURE & CONTROL FLOW
    - [ ] Continuous Running Loop [while(true) execution loop]
    - [ ] Session Termination Hook [Press 'Q' or 'E' to exit safely]
    - [ ] Previous Result Anchor [Using 'Ans' variable as next input]
    - [ ] Session Memory Registers [M+, M-, and MR memory functions]

[ ] 🛡️ LEVEL 4: DEFENSIVE PROGRAMMING
    - [ ] Input Character Validation [Fixing infinite loops via cin.clear()]
    - [ ] Domain Limit Checks [Gracefully blocking invalid math operations]

[ ] 💾 LEVEL 5: DATA PERSISTENCE
    - [ ] Session Log Export [Writing audit logs to a local 'history.txt']
    - [ ] Excel Compatible Matrix [Exporting structured session tables to '.csv']
=====================================================================
*/
