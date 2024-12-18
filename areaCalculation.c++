/* 05.Write a program to add two complex numbers using constructor overloading. */
#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int r=0,int i=0):real(r),imag(i){}
    Complex(Complex &c1,Complex &c2){
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }

    void input(){
        cout<<"Enter the real and imaginary part of the number: ";
        cin>>real>>imag;
    }
    void show(){
        cout<<"\n The sum of two complex numbers: "<<real<<"+ i"<<imag<<endl<<endl;
    }
};
int main(){
    Complex c1,c2;
    c1.input();
    c2.input();
    Complex ans(c1,c2);
    ans.show();
    return 0;
}

//The output is 
/*


*/