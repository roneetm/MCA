// PROGRAM FOR SJF - Shortest Job First Algorithm //
#include<stdio.h>
int main()
{
	int pos, i, j, n, bt[20], wt[20], tat[20], total, p[20], temp;
	float avwt=0, avtat=0;	
	printf("Enter total number of process (max 20)\n");
	scanf("%d", &n);
	printf("Enter process busrt time\n");
	for(i=0; i<n; i++)
{
	printf("p[%d] :", i+1);
	scanf("%d", &bt[i]); 
	p[i]=i+1;
// SORTING OF BUSRT TIME //
	for(i=0; i<n; i++)
{
	pos=i;
	for(j=i+1; j<n; j++)
{
	if(bt[j]<bt[pos])
	pos=j;
}
	temp = bt[i];
	bt[i]=bt[pos];
	bt[pos]=temp;
	temp = p[i];
	p[i]=p[pos];
	p[pos]=temp;
}
	wt[0]=0;
	for(i=0; i<n; i++)
{
	wt[i]=0;
	for(i=0; j<n; j++)
	wt[i]=wt[i]+bt[j];
	total=total+wt[i];
}
	avwt=(float)total/n;
	total= 0;
	printf("\n Process Burst Time, Wiating Time & Turnaround Time");
	for(i=0; i<n; i++)
{
	tat[i]=bt[i]+wt[i];
	total=total+tat[i];
	printf("\n p[%d] %d %d %d", p[i],bt[i], wt[i], tat[i]);
}
	avtat=(float)total/n;
	printf("/ Average Waiting Time = %f", avwt);
	printf("/ Average Turn-around Time = %f", avtat);
	return 0;
}
}