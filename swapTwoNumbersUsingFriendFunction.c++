#include<bits/stdc++.h>
using namespace std;
class B;
class A{
    int numA;
    public:
    A(int a=0):numA(a){}
    friend void swap(A &a, B &b);
    void get(){
        cout<<"Enter a:";
        cin>>numA;
    }
    void display(){
        cout<<"a: "<<numA<<endl;
    }
};
class B{
    int numB;
    public:
    B(int b=0):numB(b){}
    friend void swap(A &a,B &b);
    void get(){
        cout<<"Enter b: ";
        cin>>numB;
    }
    void display(){
        cout<<"b :"<<numB<<endl;
    }
};

void swap(A &a,B &b){
    swap(a.numA,b.numB);
}
int main(){
    A obja;
    B objb;
    obja.get();
    objb.get();
    cout<< "before swapping :" << endl;
    obja.display();
    objb.display();

    swap(obja, objb);
    cout << "After swapping:" << endl;
    obja.display();
    objb.display();
    return 0;
}