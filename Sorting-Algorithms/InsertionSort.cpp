#include <iostream>
#include <vector>

using namespace std;

vector<int> InsertionSort(vector<int> arr);
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
    arr_sorted = InsertionSort(arr);
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

vector<int> InsertionSort(vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        int val = arr[i];
        for(int j = i-1; j >= 0; j--){
            if(arr[j+1] < arr[j]){
                arr[j+1] = arr[j];
                arr[j] = val;
            }else{
                break;
            }
        }
    }
    return arr;
}