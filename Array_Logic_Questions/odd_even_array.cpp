#include<iostream>
using namespace std;

int main(){

    int size_of_array;
    cout << "Enter the Size Of Array: ";
    cin >> size_of_array;

    int* arr = new int[size_of_array];

    cout << "Elements of Array: ";
    for(int i = 0; i < size_of_array; i++){
        cin >> arr[i];
    }

    cout << "Odd Elements of Array: ";
    for(int i = 0; i < size_of_array; i++){
        if(arr[i] % 2 != 0){
            cout << arr[i] << " ";
        }
        
    }
    cout << endl;
    cout << "Even Elements of Array: ";
    for(int i = 0; i < size_of_array; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    delete[] arr;
    return 0;
}