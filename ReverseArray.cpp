#include <iostream>
#include <utility>
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
    int start = 0;
    int end = num -1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i =0; i < num; i++) {
        cout << "value :: " << arr[i];
    }
}