// #include<iostream>
// using namespace std;

// const int MAX_SIZE = 100;
// int currentSize = 0;
// int arr[MAX_SIZE];

// void displayArray(){
//     if(currentSize == 0){
//         cout << "Array is empty" << endl;
//     }
//     else{
//         cout << "Array: " << endl;
//         for(int i=0; i<currentSize; i++){
//             cout << arr[i] << " ";
//         }
//     }
// }

// void addelement(int element){
//     if(currentSize == MAX_SIZE){
//         cout << "Array is full" << endl;
//     }
//     arr[currentSize++] = element;
//     cout << "Element added successfully" << endl;
// }

// void updateElement(int index, int newValue){
//     if(index > 0 || index >= currentSize){
//         cout << "Updation Failed" << endl;
//     }
//     arr[index] = newValue;
//     // currentSize++;
//     cout << "Updateion successfull" << endl;
// }

// void deleteElement(int index){
//     if(index < 0 || index >= currentSize){
//         cout << "Deletion failed" << endl;
//     }
//     for(int i=index; i<currentSize - 1; ++i){
//         arr[i] = arr[i+1];
//     }
//     currentSize--;
//     cout << "Deletion successfull" << endl;
// }


// int main(){
//     int size;
//     cin >> size;

//     int choice;
//     cin >> choice;

//     switch(choice){
//         case 1:
//             displayArray();break;
//         case 2:
//             int element;
//             cin >> element;
//             addelement(element);break;
//         case 3:
//             int index, newValue;
//             cin >> index >> newValue;
//             updateElement(index, newValue);break;
//         case 4:
//             int index;
//             cin >> index;
//             deleteElement(index);break;
//         default:
//             cout << "Invalid choice" << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

int arr[MAX_SIZE];  
int currentSize = 0;  


void displayArray() {
    if (currentSize == 0) {
        cout << "Array is empty" << endl;
        return;
    }
    cout << "Array elements:";
    for (int i = 0; i < currentSize; ++i) {
        cout << " " << arr[i];
    }
    cout << endl;
}


void addElement(int element) {
    if (currentSize == MAX_SIZE) {
        cout << "Array is full. Cannot add more elements." << endl;
        return;
    }
    arr[currentSize++] = element;
    cout << "Element " << element << " added successfully." << endl;
}

void updateElement(int index, int newValue) {
    if (index < 0 || index >= currentSize) {
        cout << "Invalid index. Update operation failed." << endl;
        return;
    }
    arr[index] = newValue;
    cout << "Element at index " << index << " updated to " << newValue << " successfully." << endl;
}

void deleteElement(int index) {
    if (index < 0 || index >= currentSize) {
        cout << "Invalid index. Delete operation failed." << endl;
        return;
    }
    for (int i = index; i < currentSize - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    currentSize--;
    cout << "Element at index " << index << " deleted successfully." << endl;
}

int main() {
    int choice;
    do {
        cout << "Choose operation:" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Add Element" << endl;
        cout << "3. Update Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray();
                break;
            case 2: {
                int element;
                cout << "Enter element to add: ";
                cin >> element;
                addElement(element);
                break;
            }
            case 3: {
                int index, newValue;
                cout << "Enter index to update: ";
                cin >> index;
                cout << "Enter new value: ";
                cin >> newValue;
                updateElement(index, newValue);
                break;
            }
            case 4: {
                int index;
                cout << "Enter index to delete: ";
                cin >> index;
                deleteElement(index);
                break;
            }
            case 5:
                cout << "Exiting program. Bye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}
