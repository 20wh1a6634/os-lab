#include<stdio.h>
int main(){
int i,p[10], n, bt[10],wt[20],tat[20],total_wt,total_tat;
printf("enter n value");
scanf("%d",&n);
printf("enter the values of burst_time:");
for(int i=0;i<n;i++){
scanf("%d",&bt[i]);
}
wt[0] = total_wt = 0;
total_tat = 0;
        for(int i=1;i<n;i++){
                wt[i] = bt[i-1] + wt[i-1];
tat[i] = bt[i] + wt[i];

}
printf("Processes    Burst_Time     Waiting_Time     Turn_Around_Time\n");
for(int i=0 ; i<n; i++){
total_wt += wt[i];
total_tat += tat[i];
printf("\n%d \t \t %d \t \t %d \t \t %d ",i+1,bt[i],wt[i],tat[i]);
}
float awt = (float)total_wt/(float)n;
float atat = (float)total_tat/(float)n;
        printf("\nAverage Waiting Time = %f\n",awt);
printf("\nAverage Turn Around Time = %f",atat);

}
##output:
  enter n value4
  enter the values of burst_time:6
  5
  5
  3
  Processes    Burst_Time     Waiting_Time     Turn_Around_Time

   1 6 0 0
   2 5 6 11
   3 5 11 16
   4 3 16 19
  Average Waiting Time = 8.250000
  Average Turn Around Time = 11.500000
