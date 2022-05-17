#include <iostream>
 
using namespace std;

//Su Dung Quy Hoach Dong
void gt(int a[],int f[],int n, int t)
{
	for (int i=1;i<=t;i++)
	{
		f[i]=INT_MAX;
	   for (int j=1;j<=n;j++)
	      if (i>=a[j] && j>f[i-a[j]]) 
	      {
	      	f[i]=j;
	      	break;
		  }
	}
}
//in ra so keo cua 2 em
void truyvet(int a[],int f[], int d[],int n, int t)
{
	while (f[t] > n) t--;
	while (t > 0)
	{
		d[f[t]]=1;
		t=t-a[f[t]];
	}
	cout<<"em 1: ";
	for (int i=1;i<=n;i++)
	   if (d[i]==1) cout<<a[i]<<" ";
	   cout<<endl;
	cout<<"em 2: ";
	for (int i=1;i<=n;i++)
		if (d[i]!=1) cout<<a[i]<<" ";
		cout<<endl;
}
int main()
{
	int n,t=0,f[10001],d[10001];
	cout<<"nhap so goi keo:";
	cin>>n;
	int a[n+1];
	for (int i=1;i<=n;i++)
	   {
	   	cout<<"nhap goi thu a["<<i<<"]:";
	   	cin>>a[i];
	   	t=t+a[i];
	   }
	t=t/2;
	gt(a,f,n,t);
	cout<<"---------------------------------"<<endl;
	cout<<"so goi keo sau khi chia cho 2 em:"<<endl;
	truyvet(a,f,d,n,t);
	return 0;
}
