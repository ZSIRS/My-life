#include <stdio.h>
#include <stdlib.h>

int distinguish(int b)
{
int i;
for(i=2;i<b;i++)
{
if(b%i==0)
break;
}
if(i<b) printf("这个数是素数.\n");
else printf("这个数不是素数.\n");
system("pause");
return 0;
}

int main()
{
int a;
printf("请输入一个数:");
scanf("%d",&a);
distinguish(a);
return 0;
}
