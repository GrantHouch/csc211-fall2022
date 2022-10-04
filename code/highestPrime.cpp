// Write a program that takes an integer n > 1 from stdin 
// and outputs the largest prime number less than or equal 
// than n to the stdout
#include <iostream>

bool isPrime(int n){
    for(int i = 2; i < n/2; i++ ){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int highestPrint(int n){

    int myPrime = 0;

    for(int i = n; i > 1; i--){
        
        if(isPrime(i)){
            myPrime = i;
            break;
        }
    }

    return myPrime;

}



int main(){


    std::cout << highestPrint(16);



    return 0;
}