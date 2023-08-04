#include<iostream>
using namespace std;
class operation
{
public:
	int feet_or_meteres=0;
	int inches_or_centimeters=0;
	int ans_feet_meteres=0;
	int ans_inches_centimeters=0;

	operation(int a,int b)
	{
		feet_or_meteres=a;
		inches_or_centimeters=b;
	}

	friend void get(int ch,operation obj);
};

void get(int ch,operation obj){
	if(ch==1)
	{
		obj.ans_feet_meteres=obj.feet_or_meteres*0.3048;
		obj.ans_inches_centimeters=obj.inches_or_centimeters*2.54;
		cout<<"The Ans in is "<<obj.ans_feet_meteres<<" meters "<<obj.ans_inches_centimeters<<" centimeters ";
	}
	else if(ch==2){
		obj.ans_feet_meteres=obj.feet_or_meteres*3.28084;
		obj.ans_inches_centimeters=obj.inches_or_centimeters*0.39371;
		cout<<"The Ans in is "<<obj.ans_feet_meteres<<" feet "<<obj.ans_inches_centimeters<<" inches ";
	}

};

int main()
{
	int ch,a,b;
	cout<<"Enter the values:";
	cin>>a>>b;
	operation db(a,b);
	operation dm(a,b);
	
	cout<<"1.If the value is in feet and inches"<<endl;
	cout<<"2.If the value is in meters and centimeters"<<endl;
	cout<<"Enter the choice:";
	cin>>ch;
	if(ch==1)
	{
		get(ch,db);
	}
	else if(ch==2)
	{
		get(ch,dm);
	}
	
}