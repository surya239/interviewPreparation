#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Size of the array :: ";
    cin >> num;
    int arr[num];
    for(int i =0; i < num ; i++){
        cout << "Enter value " << i << " : ";
        cin >> arr[i];
    }
    int t = arr[0];
    bool ascending = arr[1] >= arr[0];

    for (int i = 2; i < num; i++) {
        if (ascending && arr[i] < arr[i - 1]) {
            cout << "Is sorted :: 0";
            return 0;
        }

        if (!ascending && arr[i] > arr[i - 1]) {
            cout << "Is sorted :: 0";
            return 0;
        }
    }

    cout << "Is sorted :: 1";
}