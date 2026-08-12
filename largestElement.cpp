#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Number of Elements : ";
    cin >> n;
    int arr[n];
    for(int i =0; i <n; i++){
        cout << "Enter Element " << i << " : ";
        cin >> arr[i];
    }
    int t = arr[0];
    n = sizeof(arr) / sizeof(arr[0]);
    for(int i =1; i < n; i++){
        if(t < arr[i]){
            t = arr[i];
        }
    }
    cout << " Largest Element :: " << t;
}