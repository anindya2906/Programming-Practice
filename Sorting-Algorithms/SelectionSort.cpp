#include <iostream>
#include <vector>

using namespace std;

vector<int> SelectionSort(vector<int> arr, int start = 0);
void PrintVector(vector<int> arr);
int FindMinIndex(vector<int> arr, int start);

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

int FindMinIndex(vector<int> arr, int start){
    int min_idx = start;
    for(int i = start+1; i < arr.size(); i++){
        if(arr[i] < arr[min_idx]){
            min_idx = i;
        }
    }
    return min_idx;
}

vector<int> SelectionSort(vector<int> arr, int start){
    if(start < arr.size()){
        int min_idx = FindMinIndex(arr, start);
        if(min_idx != start){
            int temp = arr[start];
            arr[start] = arr[min_idx];
            arr[min_idx] = temp;
        }
        arr = SelectionSort(arr, start+1);
    }
    return arr;
}