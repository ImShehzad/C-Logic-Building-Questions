#include<iostream>
using namespace std;

int main(){

    int size_of_array;
    cout << "Enter the Size Of Array: ";
    cin >> size_of_array;

    int sum = 0;

    int* arr = new int[size_of_array];

    cout << "Elements of Array: ";
    for(int i = 0; i < size_of_array; i++){
        
        cin >> arr[i];
        sum += arr[i];

    }
    
    cout << "Sum of Array: " << sum << endl;
    delete[] arr;
    return 0;
}