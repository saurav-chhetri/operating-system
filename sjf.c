#include<stdio.h>
int main(){
    int i,j,n,p[10],bt[10],tat[10],comp[30],wat[10],temp,sum1=0,sum2=0;
     float tat1=0,wat1=0;
    
    printf("enter the process\n");
    scanf("%d",&n);
    printf("enter the process\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&p[i]);
    }
 printf("enter the process burst time\n");
 for(i=0;i<n;i++){
     scanf("%d",&bt[i]);
 }
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(bt[j]>bt[j+1]){
            temp=bt[j];
            bt[j]=bt[j+1];
            bt[j+1]=temp;
            temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
     }
    }
}
/*printf("process\t  burst time\n");
for(i=0;i<n;i++){
  printf("%d \t\t%d\n",p[i],bt[i]);  
}*/
for(i=0;i<n;i++){
    sum1=sum1+bt[i];
    tat[i]=sum1;
    wat[i]=tat[i]-bt[i];
}
printf("process \tburst time \t tat \t \t waiting time\n");
for(i=0;i<n;i++){
printf("%d \t\t%d\t\t %d \t\t %d\n",p[i],bt[i],tat[i],wat[i]);
}
for(i=0;i<n;i++){
    sum1=tat1;
    tat1=sum1+tat[i];
    sum2=wat1;
    wat1=sum2+wat[i];
}
wat1=wat1/n;
tat1=tat1/n;
printf("the average turn around time is:\n %f",tat1);
printf("\nthe average waiting time is:\n %f",wat1);
}
