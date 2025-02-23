#include<iostream>
using namespace std;

int main(){

    int size_of_array, search_element, index = -1;
    cout << "Enter the Size Of Array: ";
    cin >> size_of_array;

    int* arr = new int[size_of_array];

    cout << "Elements of Array: ";
    for(int i = 0; i < size_of_array; i++){
        cin >> arr[i];
    }
    
    cout << "Search Elements: ";
    cin >> search_element;
    
    for(int i = 0; i < size_of_array; i++){
        if(arr[i] == search_element){
            index = i;
            break;
        }
    }

    if(index != -1){
        cout << index;
    }
    else{
        cout << "Array not found.\n";
    }
    
    delete[] arr;
    return 0;
}