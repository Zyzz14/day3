#include <iostream>
using namespace std;

void pair_sum(int arr[], int sum, int size){
    bool found = false;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] + arr[j] == sum){
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }
    
    if (!found) {
        cout << "No pairs found that sum up to " << sum << endl;
    }
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum;
    cout << "Enter sum to find pairs for: ";
    cin >> sum;

    pair_sum(arr, sum, size);

    return 0;
}
