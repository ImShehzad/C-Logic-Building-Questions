#include<iostream>
using namespace std;

int main(){

    int size_of_array;
    cout << "Enter the Size Of Array: ";
    cin >> size_of_array;

    int* arr = new int[size_of_array];

    cout << "Enter the Elements of Array: ";
    for(int i = 0; i < size_of_array; i++){
        cin >> arr[i];
    }

    cout << "The Elements of Array are: ";
    for(int i = 0; i < size_of_array; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}