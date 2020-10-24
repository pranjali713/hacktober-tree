#include<bits/stdc++.h>
using namespace std;
int Lsearch(int a[],int num)
{
  int pos=-1;
  for(int i=0;i<5;i++)
  {
    if(a[i]==num)
  {
    pos=i+1;
    break;
  }

}
return pos;
}

int main()
{
  int ar[5],i,num,pos;
  cout<<"Enter the array:"<<endl;
  for(i=0;i<5;i++)
  cin>>ar[i];
  cout<<"Array is: ";
  for(i=0;i<5;i++)
  cout<<ar[i]<<" ";
  cout<<"\n Enter the number that is to be searched for:" ;
  cin>>num;
  pos=Lsearch(ar,num);
  if(pos==-1)
  cout<<"No such element!";
  else
  cout<<"Element found at pos "<<pos;
}
