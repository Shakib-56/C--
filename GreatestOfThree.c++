/* 03.write a program to find the greatest of three given
 numbers in three different classes using friend 
function. */

#include<iostream>
using namespace std;

class B;
class C;
class A{
    public:
        int a;
        A(int x=0):a(x){};
        friend int Greatest(A, B, C);
};
class B{
public:
    int b;
    B(int y=0):b(y){};
    friend int Greatest(A, B, C);
};
class C{
    public:
        int c;
        C(int z=0):c(z){};
        friend int Greatest(A,B,C);
};

int Greatest(A objA,B objB,C objC){
    return max(objA.a,max(objB.b,objC.c));
}

int main(){
    int x, y, z;
    cout << "Enter value for a:";
    cin >> x;
    cout << "Enter value for b: ";
    cin >> y;
    cout << "Enter value for c : ";
    cin >> z;

    A objA(x);
    B objB(y);
    C objC(z);

    cout << "Greatest = " << Greatest(objA, objB, objC) << endl;

    return 0;
}