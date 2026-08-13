#include <iostream>
#include <unordered_map>
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
    unordered_map<int, int> map;
    for(int i =0; i < num; i++){
       if(map.find(arr[i]) == map.end()){
            map[arr[i]] = 1;
       }else{
            map[arr[i]]++;
       }
    }
    for(auto &item : map){
        cout << "id :: " << item.first << " value :: " <<item.second;
    }
}