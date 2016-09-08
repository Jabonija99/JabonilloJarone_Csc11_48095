/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 7, 2016, 6:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string numbers = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans = "";
    
    unsigned int num, base; //Number and base
    unsigned int div, rem; //Divisor and remainder
    
    cout << "Enter an positive integer in base 10: ";
    cin >> num;
    
    cout << "Enter a number base to convert to (2-36): ";
    cin >> base;
    
    div = num;
     
    if(base >=2 && base <=36){
        
        do{
            unsigned int div2 = div/base;
            rem = base*div2 - div;
            div = div2;
            ans = numbers[rem] + ans;
           
        }while(div >= base);
        ans = numbers[div]+ans;
    
        cout <<"Results\n=================================\n"
                <<"Base 10: " <<num <<endl
                <<"Base " <<base << ans <<endl;
    
    }
    else{
        cout <<"Invalid input!\n";
    }
    
    return 0;
}

