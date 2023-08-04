#include<iostream>
using namespace std;
class currency
{
public:
    int ruppee=0,paise=0;
    currency(int r,int p)
    {
        ruppee=r;
        paise=p;

    }
    friend currency addcurrency(currency c1,currency c2);
    void display()
    {
        cout<<"Rupees: "<<ruppee<<endl;
        cout<<"Paisa: "<<paise<<endl;
    }

};
currency addcurrency(currency c1,currency c2)
{
   int r,p,carry,temp_p;
    temp_p=c1.paise + c2.paise;
    carry=temp_p/100;
    p=temp_p%100;
    r=c1.ruppee+c2.ruppee+carry;
    currency temp(r, p);
    return temp;
}
int main()
{
    int r1,p1,r2,p2;
    cout << "Enter details for Currency 1:"<<endl;
    cout<<"Enter rupees: ";
    cin>>r1;
    cout<<"Enter paisa: ";
    cin>>p1;
 
    cout<< "Enter details for Currency 2:"<<endl;
    cout<<"Enter rupees: ";
    cin>>r2;
    cout<<"Enter paisa: ";
    cin>>p2;
    currency c1(r1,p1),c2(r2,p2);
    
    
    currency c3=addcurrency(c1, c2);
    cout << "Currency 1 details:\n";
    c1.display();
    cout << "Currency 2 details:\n";
    c2.display();
    cout << "Resultant Currency details:\n";
    c3.display();

}

