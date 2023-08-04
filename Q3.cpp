#include <iostream>
using namespace std;
class paper
{
public:
	float width,height;
	paper(float a,float b)
	{
		height=a;
		width=b;
	}
	void get(paper obj);
};
void paper::get(paper obj)
{
	float area,perimeter;
	area=obj.height*obj.width;
	perimeter=2*(obj.height+obj.width);
	cout<<"The area of paper is:"<<area<<endl;
	cout<<"The perimeter of paper is:"<<perimeter<<endln;
}
int main()
{
	float w,h;
	cout<<"Enter the height and width of paper:";
	cin>>h>>w;
	paper pap(h,w);
	pap.get(pap);

}