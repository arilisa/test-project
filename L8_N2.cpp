#include <iostream>

// asjkldasdfkl;asdjfk
// asdasdasdasdas

void swap(int arr[], int size){
    int temp = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = temp;
}

int main(){
    const int NMAX = 1000;
    int arr[NMAX];
    int n;
    std :: cout << "Enter array [n] (no more than 1000): ";
    std :: cin >> n;
    std :: cout << "Enter array itself: ";
    for(int i=0; i<n; i++){
        arr[i] = i+1;
        std :: cout << arr[i] << " ";
    }
    std :: cout << "\n";

    swap(arr, n);
    for(int i=0; i<n; i++){
        std :: cout << arr[i] << " ";
    }
    
    return 0;
}