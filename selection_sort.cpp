#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void SelectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min_index = i;
        for (int j=i; j<n; j++){
            if (arr[j] < arr[min_index]) min_index = j;
        }
        swap(arr[i],arr[min_index]);
    }
}

int main() {
    int n;
    cout << "enter length of the array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "enter array elements !\n"; 
    for (int i=0; i<n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    
    SelectionSort(arr,n);
    print(arr,n);
    
}
