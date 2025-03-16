#include <iostream>
#include "question4.h"
#include <string>

using std:: cin;
using std::cout;
using std:: string;


int main()
{

    while(true){
        int choice ;
        cout<<"\nEnter 1 to convert to hex or Enter 2 to exit: ";
        cin>> choice;

        switch(choice){
            case 1:
                int range;
                cout<< "\n Enter a number in the range of 1 - 255: ";
                cin>> range;
                if (range >= 1 && range <= 255){
                    cout << " The result is: ";
                    cout << decimal_to_hex(range);
                    cout<< "\n ";


                }

            case 2:
                return 0;
            default: 
                cout<< "Invalid choice. please enter 1 or 2";

        }




    }

    return 0;
}