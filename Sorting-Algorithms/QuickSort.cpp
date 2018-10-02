#include <iostream>
#include <vector>

using namespace std;

void QuickSort(vector<int> *arr, int left, int right);
int Partition(vector<int> *arr, int left, int right);
void Swap(vector<int> *arr, int i, int j);
void PrintVector(vector<int> *arr);

int main(){
    int n,k;
    vector<int> arr;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> k;
        arr.push_back(k);
    }
    cout << "Before Sorting : " << endl;
    PrintVector(&arr);
    QuickSort(&arr,0, arr.size()-1);
    cout << "After Sorting : " << endl;
    PrintVector(&arr);
    return 0;
}

void PrintVector(vector<int> *arr){
    for(int i = 0; i < arr->size(); i++){
        cout << arr->at(i) << " ";
    }
    cout << endl;
}

void QuickSort(vector<int> *arr, int left, int right){
    if(left < right){
        int q = Partition(arr, left, right);
        QuickSort(arr, left, q-1);
        QuickSort(arr, q+1, right);
    }
}

int Partition(vector<int> *arr, int left, int right){
    vector<int> arr_temp = *arr;
    int pivot = arr_temp[right];
    int i = left - 1;
    for(int j = left; j <= right-1; j++){
        if(arr_temp[j] <= pivot){
            i++;
            if(i != j){
                Swap(arr, i, j);
            }
        }
    }
    Swap(arr, i+1, right);
    return i+1;
}

void Swap(vector<int> *arr, int i, int j){
    int temp = arr->at(i);
    arr->at(i) = arr->at(j);
    arr->at(j) = temp;
}