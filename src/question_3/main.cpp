#include <iostream>
#include "question3.h"
#include <vector>
using std::vector;
using std:: cout;
using std:: cin;

int main()
{
    
    while(true){
        int choice;
        cout<<"\n Enter 1 to enter a number or to 2 quit: ";
        cin>> choice ; 

        switch (choice){
            case 1:
                int prime;
                cout << "\nEnter a number between 1-60: ";
                cin>> prime;
                if (prime> 0 && prime < 60){
                    cout << " The prime numbers are: " ;
                    for (int &num:get_prime(prime) ){
                        cout<< num<<" ";
                    }
                
                }

                break;

        case 2:
            return 0;
        default: 
            cout<< "Invalid choice. please enter 1 or 2";
        }


    }













    return 0;
}