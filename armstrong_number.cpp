#include <iostream>
using namespace std;
int main()
{
int num,r;
int sum=0,temp;
cout<<"Enter a number : ";
cin>>num;
temp=num;
while(num>0)
{
r=num%10;
sum=sum+(r*r*r);
num=num/10;
}
if(temp==sum)
cout<<num<<" is an armstrong number"<<endl;
else
cout<<num<<" is not an armstrong number."<<endl;
return 0;
}
