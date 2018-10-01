#include <iostream>
#include <vector>

using namespace std;

vector<int> SelectionSort(vector<int> arr);
void PrintVector(vector<int> arr);

int main(){
    int n,k;
    vector<int> arr, arr_sorted;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        arr.push_back(k);
    }
    cout << "Before Sorting : " << endl;
    PrintVector(arr);
    arr_sorted = SelectionSort(arr);
    cout << "After Sorting : " << endl;
    PrintVector(arr_sorted);
    return 0;
}

void PrintVector(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


vector<int> SelectionSort(vector<int> arr){
    // for each item in array
    for(int i = 0; i < arr.size()-1; i++){
        // find the idex of minimum value from the rest of the array
        int min_index = i;
        for(int j = i+1; j < arr.size(); j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        // swap the minimum with the current
        if(min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    return arr;
}