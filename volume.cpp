#include<iostream>
using namespace std;
float volume(int r, float h)
{
	float v=3.14*r*r*h;
	return v;
}
float volume(float r1, float h)
{
	float v=1/3*(3.14*r1*r1*h);
	return v;
}
float volume(int r)
{
	float v=4/3*(3.14*r*r*r);
	return v;
}
int main()
{
	int r;
	float h,r1;
	cout<<"\n\nEnter radius and height:";
	cin>>r>>h;
	cout<<"Volume of cylinder="<<volume(r,h);
	
	cout<<"\n\nEnter radius and height:";
	cin>>r>>h;
	cout<<"Volume of cone="<<volume(r1,h);
	
	cout<<"\n\nEnter radius :";
	cin>>r;
	cout<<"Volume of sphere="<<volume(r);
}
