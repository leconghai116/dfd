#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap phan tu thu "<< i <<": ";
		cin>>a[i];
	}
}



bool KTSCP(int n)
{
    if(n<1)
        return false;
    int i = sqrt(n);
    if(i*i==n)
        return true;
    return false;
}
void XuatMang(int a[], int n)
{
    cout<<"Cac so chinh phuong trong mang: \n";
    for(int i=0;i<n;i++)
        if(KTSCP(a[i]))
            cout<<" "<<a[i];
}
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void SX(int a[], int n){	
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
	        if(a[i] > a[j])
		        Swap(a[i], a[j]);
}

void CPTANG(int a[], int n)
{
    cout<<"Cac so chinh phuong sau khi sx: \n";
    for(int i=0;i<n;i++)
        if(KTSCP(a[i]))
            cout<<" "<<a[i];
}
int TongPTSCP(int a[], int n)
{
	int tong=0;
	for(int i=0; i<n; i++)
		if(KTSCP(a[i])==true)
			tong = tong + a[i];
		return tong;
	return -1;
}

int main()
{
	int a[MAX], i, n, kq;
	
	cout<<"Nhap so luong phan tu thuc: "; cin>>n;
		
	NhapMang(a,n);


	XuatMang(a,n);
	SX(a,n);
	cout<<endl;
	CPTANG(a,n);

	kq=TongPTSCP(a,n);
	cout<<"\nTong cac phan tu la so nguyen to co trong mang la: "<< kq;

	cout<<endl;
}
