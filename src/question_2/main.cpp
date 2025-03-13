#include <iostream>
#include "question2.h"

using std:: cout;
using std:: cin;

int main(){

    while(true){
        int choice;
        cout<<"\n Enter 1 to find sales commission or 2 to quit: ";
        cin>> choice ;

        switch (choice){
            case 1:
                int sales;
                cout << "\n Enter sales price: ";
                cin >> sales;
                cout << "your sails commission is " << get_sales_commission(sales);

                break;
            
            case  2: 
                return 0;
            default:
                cout<< "Invalid choice. please enter 1 or 2 ";
        }
        
    }

    return 0;
}
