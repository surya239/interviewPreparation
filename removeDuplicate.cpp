#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout << "Enter the size :: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Element :: "<<endl;
    for (int i =0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0;
    int j = 1;

    while (j < n) {
        if (arr[j] > arr[i]) {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    cout << "Non duplicate range :: " << i + 1;
}