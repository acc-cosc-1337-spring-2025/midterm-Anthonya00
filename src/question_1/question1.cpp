#include <iostream>
#include "question1.h"
#include <string>
using std:: string;
using std:: to_string;


bool test_config()
{
    return true;
}

string get_fib_sequence(int numbers){
    

    int num1,num2,num3;
    num1 = 0;
    num2 = 1;
    num3 = num1 + num2;

    string result ;
    result = result + to_string(num1) + " " ;
    result = result + to_string(num2) + " " ;
    for (int i = numbers -2 ; i > 0; i--){
        result = result + to_string(num3) + " " ;
        
        num1 = num2 + num3;
        num2 = num3;
        num3 = num1;

        
    } 
    result = result + to_string(num3) ;


    return result;
    

}

