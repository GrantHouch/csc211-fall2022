// Write a single while loop to print the powers of two from
// 2^0 to 2^16

#include <iostream>

int main(){

    int sum = 0;
    int exp = 0;

    while(exp <= 16){

        if(exp == 0){
            sum = 1;
        }
        else{
            sum *= 2;
        }

        exp++;

        std::cout << sum << " ";

    }


    return 0 ;
}