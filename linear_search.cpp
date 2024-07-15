#include<iostream>
using namespace std;

int linearSearch(int arr[], int key, int size){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1; 
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

    int result = linearSearch(arr, key, size);

    if(result != -1){
    cout << "Key found at index " << result << endl;
    }else{
        cout << "key not found" << endl;
    }
    return 0;
}