#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (i = 0; i < n;i++){
        for (j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << " Sorted Array" << endl;
    for (i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}