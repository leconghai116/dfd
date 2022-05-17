#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
int n,T,i,j,GT,TL;
int d[100][100];
int a[100],c[100],cs[100];
int F[100][100];
int max(int a, int b)
{
return(a>b ? a : b);
}

void bangphuongan()
{
for(int i=0;i<=n;i++)
{
F[i][0]=0;
}
for(int j=0;j<=T;j++)
{
F[0][j]=0;
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=T;j++)
{
if (a[i]>j)
{
F[i][j]=F[i-1][j];
}
else
{
F[i][j]=max(F[i-1][j],F[i-1][j-a[i]]+c[i]);
}


}
}
for (int i=0;i<=n;i++)
{
for(int j=0;j<=T;j++)
{
cout<<F[i][j];
printf(" ");
}
printf("\n");
}

}


//truy vet
void truyvet()
{
i=n;
j=T;
while ((i!=0)&&(j!=0))
{
if (F[i][j]!=F[i-1][j])
{
cout<<i;
GT=GT+c[i];
TL=TL+a[i];
j=j-a[i];

}
i--;
}
}

int main()
{
fstream doctep("C:\\C++\\Bai toan cai tui\\caitui1.txt");
doctep>>n>>T;
printf("So do vat da cho la: ");
printf("%2d",n);
printf("\n");
printf("Tong trong luong cho phep cua tui : ");
printf("%2d",T);
printf("\n");
for (int i=1;i<=2;i++)
{
for(int j=1;j<=n;j++)
{
doctep>>d[i][j];
c[j]=d[1][j];
a[j]=d[2][j];
}
}
doctep.close();
printf("gia tri cac do vat ");
for(int j=1;j<=n;j++)
{
printf("%5d",c[j]);
}
printf("\n");
printf("trong luong cac do vat ");
for(int j=1;j<=n;j++)
{
printf("%5d",a[j]);
}
printf("\n");
printf("bang truy vet");
printf("\n");
bangphuongan();
printf("cac do vat duoc chon ");
truyvet();
printf("\nTong gia tri : %3d",GT);
printf("\nTong trong luong: %3d",TL);
getche();
return(0);

}
