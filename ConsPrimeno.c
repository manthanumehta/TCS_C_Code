#include<stdio.h>
int main()
{
    int n,j,c,a[10000],sum=377;
    scanf("%d",&n);
    j=0;
    int flag=0;
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i))
        { 
            printf("%d ",i);
            a[j]=i;
            j++; 
        }    
    }
    printf("\n");
    for(int i=0;i<j;i++)
    {
        printf("%d ",a[i]);
    }

    for(int i=0;i<=j;i++)
    {
        sum=sum+a[i];
        c=isPrime(sum);
        if(c==1)
        {
            printf("\n%d %d",c,sum);
            flag++;
        }
    }
    printf("\n");
    printf("%d",flag); 

}

int isPrime(int n) 
{ 
    if (n <= 1) 
        return 0; 
    if (n <= 3) 
        return 1; 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0 ; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
    return 1; 
} 
  
