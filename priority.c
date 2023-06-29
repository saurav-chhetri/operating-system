#include<stdio.h>
int main(){
    int n,p[30],pr[10],bt[30],tat[30],wat[30],i,j,temp,sum1=0,sum2=0;
    int tat1[30],wat1[30];
    printf("enter the number of process\n");
    scanf("%d",&n);
    printf("enter the process numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter the burst time\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&bt[i]);
    }
    printf("enter the priority \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&pr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(pr[j]>pr[j+1])
            {
                temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
                temp=pr[j];
                pr[j]=pr[j+1];
                pr[j+1]=temp;
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
   for(i=0;i<n;i++)
   {
       sum1=sum1+bt[i];
       tat1[i]=sum1;
       wat1[i]=tat1[i]-bt[i];
   }
   printf("\n process\t burst_time \t priority \t turnaroundtime \t waiting time  ");
    for(i=0;i<n;i++)
   {
    printf("\n %d \t \t  %d \t\t  %d \t\t %d \t\t\t %d\n",p[i],bt[i],pr[i],tat1[i],wat1[i]);
   }

   float av_tat=0;
   float av_wat=0;
   for(i=0;i<n;i++){
        av_tat=av_tat+tat1[i];
        av_wat=av_wat+wat1[i];
   }
   av_wat=av_wat/n;
   av_tat=av_tat/n;
   printf("average waiting time is:\n%f\n",av_wat);
printf("average turn around time is:\n%f\n",av_tat);
}
