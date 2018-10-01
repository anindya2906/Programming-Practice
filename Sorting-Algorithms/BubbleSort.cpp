#include <iostream>
#include <vector>

using namespace std;

vector<int> BubbleSort(vector<int> arr);
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
    arr_sorted = BubbleSort(arr);
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

vector<int> BubbleSort(vector<int> arr){
    // for each items in the array
    for(int i = 0; i < arr.size(); i++){
        bool swapped = false;
        // till before the i'th element
        for(int j = 0; j < arr.size()-i-1; j++){
            // correct the order with adjacent element    
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= temp;
                swapped = true;
            }
        }
        // if no swapping done then array is sorted
        if(!swapped){
            break;
        }
    }
    return arr;
}