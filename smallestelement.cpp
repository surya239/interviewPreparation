#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array :: ";
    cin >> n;
    int arr[n];

    cout <<"Enter array array value :: \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int t = arr[0];
    for(int i= 1; i < n; i++){
        if(t > arr[i]){
            t = arr[i];
        }
    }
    cout << "Smallest Number :: " << t;
}