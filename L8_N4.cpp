#include <iostream>
#include <random>

void outputMatrix(int **arr[], const int &rows, const int &cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            std :: cout << arr[i][j] << " ";
        }
        std :: cout << std::endl;
    }
}

int main() {
    int rows = 5, cols = 10;
    int **arr = new int*[rows];
    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
    }
    return 0;
}