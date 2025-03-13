#include <iostream>
#include "question2.h"

bool test_config()
{    
    return true;
}

double get_sales_commission(int sales){

    if (sales > 0 && sales <= 499 ){
        sales = sales * 0.05;

    }
    else if (sales > 500 && sales <= 999 ){
        sales = sales * 0.06;

    }  
    else if (sales > 1000 && sales <= 1499 ){
        sales = sales * 0.07;
    }
    else if (sales > 1500 ){
        sales = sales * 0.08;
    }
    else{
        sales = 0;
    } 

    return sales;
    
    return 0;




}
