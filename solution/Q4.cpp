/*WAP for finding the volume of the cylinder by taking radius and height as input.*/

#include<iostream>
using namespace std;
int main()
{
float r,h;
cout<<"Enter radius and height of cylinder"<<endl;
cin>>r>>h;
float v = 3.1415 * r * r * h;
cout<<"The volume is:"<<v<<endl;

}