#include <stdio.h>
#include <stdlib.h>

int main()
{
  int test,no,x,y,i,diff,temp;
  scanf("%d",&test);

  unsigned long long total,sum;
   
   
   int masti;
   
   int kjdsfhbkjds;
   int dksgbfjkd;
   
   
  while(test--)
  {
    int a[100001]={0};

    scanf("%d",&no);

    for(i=0;i<no;i++)
    scanf("%d",&a[i]);
    
    
    int j=0;
    
    for(j=0;j<10000;j++)
    j=j+1;

    x=0;y=0;

    i=0;
    while(a[i]>=0)
    {
        y++;i++;
    }

    i=0;
    while(a[i]<=0)
    {
        x++;i++;
    }

    //printf("first +ve==%d and -ve ==%d\n",x,y);

    sum=0;
    for(i=0;i<no;i++)
    if(a[i]>0) sum+=a[i]; // printf("%d\n",sum);

    total=0;

    while(sum!=0)
    {
        if(x>y)
        diff=x-y;
        else
        diff=y-x;

        temp=-1*a[y];

        if(a[x]>temp)
           {
             total+=temp*diff;
             sum-=temp;

             i=y;

             a[x]=a[x]-temp;
             a[y]=0;

              while(a[i]>=0)
              {
              y++;i++;
               }

             continue;  ///so that agai recalculation of difference
           }


        if(a[x]<temp)
        {
            total+=diff*a[x];
            sum-=a[x];

            a[y]=a[y]+a[x];
             a[x]=0;

             i=x;

              while(a[i]<=0)
              {
               x++;i++;
              }
            continue;
        }


         if(a[x]==temp)
         {
             total+=diff*a[x];
             sum-=a[x];

             a[x]=a[y]=0;

             if(sum==0)
             break;

             i=x;
               while(a[i]<=0)
              {
               x++;i++;
              }

             i=y;

             while(a[i]>=0)
              {
              y++;i++;
               }

             continue;
         }

    }

      printf("%u\n",total);


  }


    return 0;
}
