#include <iostream>
//print identity matrix of NxN

// n = 3
// 1 0 0
// 0 1 0
// 0 0 1

int main(){

    int mymatrix[3][3];
    int row = 3;
    int col = 3;

    for(int i =0 ; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                mymatrix[i][j] = 1;
                std::cout << mymatrix[i][j];
            }
            else{
                mymatrix[i][j] = 0;
                std::cout << mymatrix[i][j];
            }

        }
        std::cout << std::endl;
    }




    return 0;
}