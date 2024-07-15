#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cin >> size;

    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int result = binarySearch(arr, key, size);
    if(result != -1){
        cout << "Key found at index " << result << endl;
    }
    else{
        cout << "Key not found" << endl;
    }

}