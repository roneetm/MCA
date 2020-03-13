//* PROGRAM FOR FCFS Algorithm *//
#include<stdio.h>
int main()
{
	int i, j, n, bt[20], wt[20], tat[20], avwt=0, avtat=0;
	printf("Enter total number of process (max 20)\n");
	scanf("%d", &n);
	printf("Enter process busrt time\n");
	for(i=0; i<n; i++)
{
	printf("p[%d] :", i+1);
	scanf("%d", &bt[i]);
	wt[0] = 0;
}
	for(i=0; i<n; i++)
{
	wt[i]=0;
	for(j=0; j<i; j++)
	wt[i]+=bt[j];
}
	printf("Process burt time, waiting time, turnaround time\n");
	for(i=0; i<n; i++)
{
	tat[i]= bt[i]+wt[i];
	avwt=avwt+wt[i];
	avtat= avtat+tat[i];
	printf("p[%d]\t %d\t,%d\t %d\t",i+1,bt[i],wt[i],tat[i]);
}
	avwt=avwt/i;
	avtat=avtat/i;
	printf("avg Waiting time %d & Avg turnaround time %d",avwt,avtat);
	return 0;
}