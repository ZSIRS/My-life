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
if(i<b) printf("�����������.\n");
else printf("�������������.\n");
system("pause");
return 0;
}

int main()
{
int a;
printf("������һ����:");
scanf("%d",&a);
distinguish(a);
return 0;
}
