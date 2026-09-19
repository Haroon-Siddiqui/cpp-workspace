#include <iostream>

using namespace std;

int main() 
{
    double x , y;
    
    char op ;  
    system("color E4");
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