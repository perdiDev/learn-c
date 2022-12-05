#include<stdio.h>
int main()
{
    int i;
    int ril[10]={1,23,43,54,12,5,67,87,99,49};
    int min;
    int max;

    min=ril[0];
    max=ril[0];
    for(i=1;i<10;i++)
    {
        if(ril[i]<min)
        {
            min=ril[i];
        }
        if(ril[i]>max)
        {
            max=ril[i];
        }
    }
    printf(" nilai min adalah %d\n",min);
    printf(" nilai max adalah %d\n",max);

    return 0;
}