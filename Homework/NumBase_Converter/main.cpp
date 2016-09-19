/**
 Creator: Jarone Jabonillo
 Class: Csc-11
 Homework assignment: Number Bases
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Create index for characters
    string index = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //Create empty string for answer
    string ans = "";
    //Non-negative number, base, divisior 1 & 2, and the remainder
    unsigned int num, base, div1, div2, rem;
    
    //Prompt user input for base 10 number
    cout << "Enter a positive number in base 10: ";
    cin >> num;
    //Prompt user for converting base
    cout << "Enter a number base to convert to (2-36): ";
    cin >> base;
    
    //If the base enter is between 2 and 36
    if(base >= 2 && base <= 36){
        //Assign number to divisor
        div1 = num;
        do{
            //Divide the divisor by the base
            div2 = div1/base;
            //Get the remainder
            rem = div1-(base*div2);
            //Assign new divisor
            div1 = div2;
            //Append to answer
            ans = index[rem]+ans;
        //Continue looping till divisor is zero
        }while(div1 > 0);
        //Output results
        cout <<endl <<"Results" <<endl
                <<"=============================" <<endl
                <<"Base 10: " << num <<endl
                <<"Base " <<base <<": " <<ans <<endl;
    }
    else{
        //Prompt error
        cout <<"Invalid input!" <<endl;
    }
    
    return 0;
}

