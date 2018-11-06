#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE f1;
FILE *fp;
fp=fopen("","r");
if((fp=fopen("","r"))==NULL)
{
printf("it cannot open this file.\n");
exit(0);
}
fclose(fp);
system("pause");
}
