#include <iostream>
#include "question3.h"
using namespace std;

using std::cout; 



bool test_config()
{
    return true;
}

bool is_prime(int prime){

    vector<int> list_of_primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};

    for(int &num: list_of_primes){
        if (num == prime){
            return true;
        }


    }
    return false;


}

vector<int> get_prime(int input){

    vector<int> banana{};
    vector<int> list_of_primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};

    for(int &num: list_of_primes){
        if (num < input){
            //add num to banana
            
            banana.push_back(num);
        }

    }
    return banana;

    
    
}