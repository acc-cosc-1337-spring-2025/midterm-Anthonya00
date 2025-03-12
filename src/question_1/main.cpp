#include <iostream>
#include "question1.h"
#include <string>

using std:: cout;
using std:: cin;
using std:: string;

int main()
{   

    while(true){
        

        int apples; 
        cout<<"\nEnter 1 to do the Fibonacci sequence or 2 to quit: ";
        cin >> apples ;
        switch(apples){
            case 1:
                int banana;
                cout << "\nEnter a another number between 1-15: ";
                cin >> banana;
                if (banana > 0 && banana <= 15){
                    cout << get_fib_sequence(banana);
                    

                }

                break;
            
            case  2: 
                return 0;
            default:
                cout << "WRONG NUMBER";

        }


    }


    return 0;
}