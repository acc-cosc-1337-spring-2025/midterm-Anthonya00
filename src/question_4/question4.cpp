#include <iostream>
#include "question4.h"
using std:: string;
using std:: to_string;
//using namespace std;

//
bool test_config()
{
    return true;
}

string decimal_to_hex(int numbers){
    int remainder;

    string result;
    while (numbers >0){

        remainder=(numbers % 16) ;
        numbers=numbers /16;

        switch (remainder){
            case 1:
                result.push_back('1');
                break;
            case 2:
                result.push_back('2');
                break;
            case 3:
                result.push_back('3');
                break;
            case 4:
                result.push_back('4');
                break;
            case 5:
                result.push_back('5');
                break;
            case 6:
                result.push_back('6');
                break;
            case 7:
                result.push_back('7');
                break;
            case 8:
                result.push_back('8');
                break;
            case 9:
                result.push_back('9');
                break;
            case 10:
                result.push_back('A');
                break;
            case 11:
                result.push_back('B');
                break;
            case 12:
                result.push_back('C');
                break;
            case 13:
                result.push_back('D');
                break;
            case 14:
                result.push_back('E');
                break;
            case 15:
                result.push_back('F');
                break;
            //default:
               // result.push_back(to_string(remainder));
        }


    }
    
    
    //string(result.begin(), result.end());
    string rev_result;
    for(int digit = result.length() -1; digit > 0; digit--){
        rev_result= rev_result + result;
    }
    
    return result; 
}