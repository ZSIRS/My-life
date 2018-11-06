#include<stdio.h>
int main()
{
    FILE *fp;
    char strname[350000];
    char data;
    float kw;
    float kvar;
    float AA;
    float BA;
    float CA;
    float kwh;
    if((fp=fopen("data.csv","r"))==NULL)
    {
        printf("File open error!\n");
        exit(0);
    }
    while(!feof(fp))
    {
        fscanf(fp,"%s%s%f%f%f%f%f%f",&strname,&data,&kw,&kvar,&AA,&BA,&CA,&kwh);
        printf("%s%s%f%f%f%f%f%f\n",strname,data,kw,kvar,AA,BA,CA,kwh);
    };
    if(fclose(fp))
    {
        printf("Can not close the file!\n");
        exit(0);
    }
    return 0;
}
