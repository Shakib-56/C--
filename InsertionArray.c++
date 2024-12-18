//algorithm
//

/*let A be an Array of size Max or N
1.If UB==Max-1
then Print Overflow & Exit
2.Read Data
3.UB=UB+1;
4.A[UB]=data;
5.Stop or Exit



// if we need to insert first at the array

3.UB=k;
4.Repeat step 5
5.A[k+1]=A[k]
k=k-1
6.A[LB]=data;













//Putin
Algorithm (Insertion):
step-1: set j:=N
step-2: Repeat steps 3 and 4 while j>=k
step-3:     set LA[j+1]:=LA[j]
step-4:     set j:=j-1
step-5: set LA[k]:=item
step-6: set N:=N+1
step-7: Exit
-----------------------------------------
-----------------------------------------
Algorithm (Deletion): 
step-1: set Item:=LA[k]
step-2: Repeat for j=k to N-1:
            set LA[j]:=LA[j+1]
step-3: set N:N-1
step-4: Exit
*/
/* https://github.com/Putin57/IST/blob/main/3rd%20semester/Lab_Report/Data%20Structure%20Lab%20report/1.cpp*/







//Source code
#include <bits/stdc++.h>
using namespace std; 

int main(){
    cout << "\nEnter the size of array: ";
    int n; cin >> n;
    cout << "Enter the element of array: ";
    int arr[n + 1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "\nThe array is : ";
    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n' << '\n';
    cout << "Array options:\n";
    cout << "1. Insertation\n";
    cout << "2. Deletation\n";
    cout << "3. exit\n\n";
    cout << "Choice your option: ";
    int option; cin >> option;
    if(option == 3){
        cout << "Exit the system...\n";
        exit(true);
    }
    else if(option == 1){
        cout << "\nEnter the index of the array: ";
        int index; cin >> index;
        if(index > n) cout << "\nInvalid...the index is out of range..\n";
        else{
            cout << "\nEnter the new element: ";
            int num; cin >> num;
            index--;
            for(int i = n; i >= index; i--) arr[i + 1] = arr[i];
            arr[index] = num;
            cout << "After the inserting the array : ";
            for(int i = 0; i < n + 1; i++) cout << arr[i] << ' ';
            cout << '\n';
        }
    }
    else{
        cout << "\nEnter the index of array: ";
        int index; cin >> index;
        if(index > n) cout << "\nInvalid... The index is out of range..\n";
        else{
            index--;
            for(int i = index; i < n; i++) arr[i] = arr[i + 1];
            cout << "\nAfter deleting the element, The array is : ";
            for(int i = 0; i < n - 1; i++) cout << arr[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}