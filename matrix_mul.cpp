#include <bits/stdc++.h>
using namespace std;

class Matrix{
  int arr[5][5];
public:
  void getdata(){
    cout<<"Enter the elements of matrix : "<<endl;
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      cin>>arr[i][j];
  }

}
void display(){
  cout<<"Matrix is "<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    cout<<arr[i][j]<<" ";
    cout<<endl;
  }

}
friend Matrix Multiplication(Matrix,Matrix);

};
Matrix Multiplication(Matrix M1,Matrix M2){
  cout<<"Multiplication of the matrix =\n";
  Matrix M3;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      M3.arr[i][j]=0;
      for(int k=0;k<3;k++)
      {
        M3.arr[i][j]+=M1.arr[i][k]*M2.arr[k][j];
      }
    }
  }
  return M3;
}
int main(){

  Matrix A,B;
  A.getdata();
  A.display();
  B.getdata();
  B.display();
  Multiplication(A,B).display();
}
