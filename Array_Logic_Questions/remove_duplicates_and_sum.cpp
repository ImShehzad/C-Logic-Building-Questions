#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

    int sum = 0;
    int size_of_array;
    cout << "Enter Size of Array: ";
    cin >> size_of_array;

    //int arr[size_of_array];
    vector<int> vec(size_of_array);

    cout << "Enter Elements: ";
    for(int i = 0; i < size_of_array; i++){
        cin >> vec[i];
    }
    
    set<int> uniqueSet(vec.begin(), vec.end());
    //set<int> uniqueSet(arr, arr + size_of_array);

    cout << "Unique Array: ";
    for(int num : uniqueSet){
        cout << num << " ";
        sum += num;
    }

    cout << endl;
    cout << "Sum of unique Array: " << sum;
    
    return 0;
}