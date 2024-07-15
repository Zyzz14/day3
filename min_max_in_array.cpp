#include<iostream>
using namespace std;

int main(){
    int min = INT16_MAX;
    int max = INT16_MIN;
    int arr[] = {1,7,3,4,5};
    for(auto temp : arr){
        if(temp > max){
            max =temp;
        }
    }
    cout << max << endl;
}