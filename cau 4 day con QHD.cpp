#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define maxN 100005



int p[maxN],path[maxN],data[maxN] = {1,6,4,2,6,3,7,10,8,9};
int n = 10;

int findx(int len,int val)
{
int lo = 0 , hi = len;
while (lo < hi)
{
int mid = (lo + hi) / 2;
if (data[p[mid]] < val)
lo = mid + 1;
else hi = mid;
}
return lo;
}

int LIS()
{
int len = 0;
p[len] = 0;
for (int i = 0 ; i < n ; i++)
{
if (data[p[len]] < data[i])
{
path[i] = p[len];
p[++len] = i;
continue;
}

int pos = findx(len,data[i]);

if (data[i] < data[p[pos]])
{
if (pos > 0)
path[i] = p[pos - 1];
p[pos] = i;
}
}
int cnt = len;
int last = p[len];

while (cnt >= 0)
{
p[cnt] = last;
last = path[last];
cnt--;
}
return len + 1;

}

int main()
{

int mlen = LIS();

printf("%d",data[p[0]]);
for (int i = 1 ; i < mlen ; i++)
printf(" %d",data[p[i]]);

printf("\n");
system("pause");

return 0;
}

