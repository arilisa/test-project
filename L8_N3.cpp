#include <iostream>
#include <random>

void fill_array(int arr[], const int &size){
    std :: random_device rd;
    std :: mt19937 gen(rd());
    std :: uniform_int_distribution<> dist(-100, 100);
    for(int i=0; i<size; i++){
        arr[i]=dist(gen);
    }
}

void cout_arr(int arr[], const int &size){
    for(int i=0; i<size; i++){
        std :: cout << arr[i] << " ";
    }
    std :: cout << "\n";
}

void shift(int arr[], const int &size){
    int* t_arr = new int[size];
    for(int i=0; i<(size-1); i++){
        t_arr[i+1] = arr[i];
    }
    t_arr[0] = arr[size-1];
    for(int i=0; i<size; i++){
        arr[i] = t_arr[i];
    }
    delete[] t_arr;
}

int main(){
    int n;
    std :: cout << "Enter n: ";
    std :: cin >> n;
    int* arr = new int[n];

    std :: cout << "0 - exit program\n" << "1 - fill array with rand ints\n" << "2 - output an array\n" << "3 - shift array by one\n";

    int func;
    bool exit = false;
    while(exit == false){
        std :: cout << "Choose an action: ";
        
        while(!(std :: cin >> func)){
            std :: cout << "Wrong input.\n";
            std :: cout << "Try again: ";
            std :: cin.clear();
            std :: cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (func)
        {
        case 0:
            delete[] arr;
            exit = true;
            break;
        case 1:
            fill_array(arr, n);
            std :: cout << "Array filled with random numbers:\n";
            cout_arr(arr, n);
            break;

        case 2:
            cout_arr(arr, n);
            break;

        case 3:
            shift(arr, n);
            std :: cout << "Array shifted by one:\n";
            cout_arr(arr, n);
            break;
        
        default:
            std :: cout << "Error.\n";
            break;
        }
    }
    return 0;
}