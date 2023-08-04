#include<iostream>
using namespace std;
class complex
{
public:
	int real,imaginary;
	complex(int r,int f)
	{
		real=r;
		imaginary=f;
	}
	complex add(complex obj){
        int real_total = real + obj.real;
        int imaginary_total = imaginary + obj.imaginary;
        complex total(real_total,imaginary_total);
        return total;
    }
	 void display(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
int main()
{
	int r1,r2,i1,i2;
    cout<<"Enter real value for complex number 1 :";
    cin>>r1;
    cout<<"Enter imaginary value for complex number 1 :";
    cin>>i1;
    cout<<"Enter real value for complex number 2 :";
    cin>>r2;
    cout<<"Enter imaginary value for complex number 2 :";
    cin>>i2;
    complex c1(r1,i1);
    complex c2(r2,i2);
    cout << "Complex 1: ";
    c1.display();
    cout << "Complex 2: ";
    c2.display();
    complex c3 = c1.add(c2);
    cout << "Result of addition: ";
    c3.display();
}
