/*WAP to find the difference between ASCII of two characters ,take them as input .*/
#include<iostream>
using namespace std;
int main()
{
    char c,d;
    cout<<"Enter any character"<<endl;
    cin>>c>>d;
    int z = (((int)c) - ((int) d));
    cout<<"The difference is:"<<z<<endl;


}