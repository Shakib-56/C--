/*01.write a program to input any number and find its factorial using constructor.*/

/*01.write a program to input any number and find its factorial using constructor.*/

#include<bits/stdc++.h>
using namespace std;
class factorial{
    int n, i, f;
    public:
    factorial(){
        cout << "Enter a number:" << endl;
        cin >> n;
        f = 1;
        for (i = 1; i <= n;i++){
            f = f * i;
        }
    }
    void display(){
        cout << "Factorial is:" << f << endl
             << endl;
    }
};

int main(){
    factorial obj1;
    obj1.display();
    return 0;
}