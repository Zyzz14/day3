//Array: To store the large form of data/same data in single variable.

#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,3,5,7,9};
    cout << "completely initialized int array A: " << endl;
    for(int x : a) //for each loop very easy and important for array data structure.
                   //Read as for x in array a.
                   // For each loop iterate through elements of the array. Introduced in 
                   //c++ 11.

        cout << x << endl;
    cout << endl;

    int b[6] = {1,3,5}; // keeping the array incomplete to see what is the outcome result.
    cout << "Partial initialized int array B: " << endl;
    for(int y : b) // show that for each loop will work according to size of array and not
                  // according to number of elements initalized in the array.
        cout << y << endl;
    cout << endl;

    float c[6] = {1.2, 2.4, 3.6, 48.54, 99.48, 54.88};
    cout << "completely initilaized float array C" << endl;
    for(float z : c)
        cout << z << endl;
    cout << endl;

    float d[6] = {12.6, 82.4, 43.6, 4.54, 77.48, 84.88};//No need to know type of array
    cout << "Completely initialized float array D in auto : " << endl;
    for(auto z : d)
        cout << z << endl;
    cout << endl;

    char e[5] = {'A', 66, 'C', 68, 'E'}; //No need to know the type of array.
    cout << "Completely initialized char array E with auto: " << endl;
    for(auto z : e)
        cout << z << endl;
    cout << endl;
    return 0;
}