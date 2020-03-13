// Priority Scheduling Program in C //

#include<stdio.h>
	void main()
{
	int bt[20], p[20], wt[20], tat[20], pr[20], i, j, n, total=0, pos, temp, avgwt, avgtat;
	printf("Enter number of process\n");
	scanf("%d", &n);
	printf("Enter burst time & proprity\n");
	for(i=0; i<n; i++)
{
	printf("For p[%d]",i+1);
	scanf("%d%d", &bt[i], &pr[i]);
	p[i]=i+1;
}
	for(i=0; i<n; i++)
{
	// Sorting burst, priprity, & process number by asceinding number of selection
	pos=i;
	for(j=i+1; j<n; j++)
{	
	if(pr[j]<pr[pos])
	pos=j;
}
	temp=pr[i];
	pr[i]=pr[pos];
	pr[pos]=temp;
	temp=bt[i];
	bt[i]=bt[pos];
	bt[pos]=temp;
	temp=p[i];
	p[i]=p[pos];
	p[pos]=temp;
}
	wt[0]=0;
	// Calculate Waiting time//
	for(i=1; i<n; i++)
	{
	wt[i]=0;
	for(j=0; j<i; j++)
	wt[i]=wt[i]+bt[i];
	total=total+wt[i];
}
	avgwt=total/n;
	total=0;
	printf("Process \t \n Burst Time \t \n Waiting Time \t \n Turn Around Time \t \n");
	for(i=0; i<n; i++)
	{
	tat[i]=bt[i]+wt[i];
	total=total+tat[i];
	printf("\n p[%d] \t %d \t %d \t %d \t \n", p[i], bt[i], wt[i], tat[i]);
}
	avgtat= total/n;
	printf("\nAverage Turnaround Time: %d", avgtat);
}