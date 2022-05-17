#include<iostream>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int &n)
{ 
	cout<<"nhap so phan tu :";
  cin>>n;
  for(int i=0;i<n;i++)
  { 
  cout<<" phan tu thu a["<<i<<"]:";
  cin>>a[i];
  }
}
int xuatmang(int a[],int n)
 {
  cout<<"mang da nhap \n";
  for(int i=0;i<n;i++)
    {
      cout<<a[i];
    }
 }
void daycontang(int a[],int n)
{
 cout<<"\n cac day con tang la: \n";
 int i,dem;
 for( i=0;i<n;i++)
 {
 dem=0;
 while(a[i]<a[i+1])
 {
 if(a[i]<a[i+1]) cout<<a[i]<<a[i+1];
 else cout<<a[i+1];
 dem++; i++; 
 }
 cout<<endl;
 }
}
int main()
{
 int a[50],n;
 nhapmang(a,n);
 xuatmang(a,n);
 daycontang(a,n);
 return 0;
}
