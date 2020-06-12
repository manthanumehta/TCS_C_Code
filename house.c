#include<stdio.h>
int main()
{
    int n,i,j;
    int lock=0,unlock=0;
    scanf("%d",&n);
    int locked[10000];
    for(i=1;i<=n;i++)
        locked[i]=0;
    j=1;
    for(i=1;i<n;i++)
    {   
        locked[i*j]=1;
        j++;
    }
    for(i=1;i<=n;i++)
    {
        if(locked[i]==1)
            lock++;
        else
        {
                unlock++;
        }
    }
    printf("Opened houses = %d \nLocked houses = %d ",lock,unlock);
}