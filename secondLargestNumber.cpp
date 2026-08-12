#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "Enter size of Array :: ";
    cin >> n;
    int arr[n];
    cout << "Enter values :: ";
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    int largestValue = INT_MIN;
int secondLargestValue = INT_MIN;

for (int i = 0; i < n; i++) {
    if (arr[i] > largestValue) {
        secondLargestValue = largestValue;
        largestValue = arr[i];
    }
    else if (arr[i] > secondLargestValue && arr[i] != largestValue) {
        secondLargestValue = arr[i];
    }
}
    cout << "Second Largest Value :: " << secondLargestValue;
}