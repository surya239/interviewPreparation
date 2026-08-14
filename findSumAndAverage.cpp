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

    int sum =0;
    for(int i =0; i < num; i++){
        sum += arr[i];
    }
    int avg = sum / num;
    cout << "sum :: " << sum << " Avg :: " << avg;
}