#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int sum;
    scanf("%d",&sum);
   
    int po=pow(2,n);
   
   
    for(int i=0;i<po;i++)
    {
        int bin[n];
        for(int j=0;j<n;j++)
        bin[j]=0;
        int k=0;
        int temp=i;
        while(temp>0)
        {
            bin[k]=temp%2;
            k++;
            temp=temp/2;
        }
        int bin1[n];
        for(int j=0;j<n;j++)
        {
            bin1[j]=0;
        }
        int h=0;
        for(int j=n-1;j>=0;j--)
        {
            bin1[h]=bin[j];
            h++;
        }
        int sum1=0;
        h=0;
        for(int j=n-1;j>=0;j--)
        {
            if(bin1[h]==1)
            {
                sum1+=a[j];
            }
            h++;
        }
        h=0;
        if(sum1==sum)
        {
            for(int j=n-1;j>=0;j--)
        {
            if(bin1[h]==1)
            {
                printf("%d ",a[j]);
            }
            h++;
        }
        printf("\n");
        }
       
    }
}