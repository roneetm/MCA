// Round Robin ALgorithm in C//

	#include<stdio.h>
	void main()
{
	int i, bt[10], remt[20], rem_process, at[10], tet=0, time_quantum, flag=0, n; // TET= Total Execution Time
	float twt = 0; // Total Waiting Time
	printf("Enter number of process\n");
	scanf("%d", &n);
	printf("Enter arrival time\n");
	for(i=0; i<n; i++)
{
	printf("For p[%d]",i+1);
	scanf("%d%d", &at[i], &bt[i]);
	remt[i]=bt[i];
}
	printf("Enter the quantum\n");
	scanf("%d", &time_quantum);
	for(i=0; rem_process!=0;)
{
	if(remt[i]<=time_quantum && remt[i]>0)
{
	tet=tet+remt[i];
	remt[i]=0;
	flag=1;
}
	else if(remt[i]>0)
	{	
	remt[i]=remt[i]-time_quantum;
	tet=tet+time_quantum;
	}
	if(flag==1 && remt[i]==0)
	{
	printf("p[%d]Waiting time: %d\n", i+1, tet-at[i]-bt[i]);
	twt=twt+tet-at[i]-bt[i];
	flag=0;
	rem_process--;
	}
	if(i==n-1)
	i=0;
	else if(at[i+1]<+tet)
{
	i++;
}
	else 
	i=0;	
}
	twt=(float)twt/n;
	printf("The Average Waiting Time: %f", twt);
}