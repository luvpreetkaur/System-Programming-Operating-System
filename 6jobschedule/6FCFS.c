// Experiment No. 6
// Aim: Job Scheduling-FCFS.
// Name:Luvpreet Kaur
// Roll No.: 304338


#include<stdio.h>
#include<string.h>
typedef struct scheduling
{
int ext,wt,tt;
char pro[10];
}
sch;
void main()
{
	int n,i,ext,wt,tt,sum1,sum2;
	float avg1,avg2;
	sch a[10];
	printf("Enter the number of processes :");
	scanf("%d",&n);
         
	for(i=0;i<n;i++)
	{
		printf("\nEnter the process :");
		scanf("%s",&a[i].pro);
		printf("\nEnter the execution time :");
		scanf("%d",&a[i].ext);
	} 
	a[0].wt=0;
	for(i=0;i<n;i++)
	{
		a[i].tt=a[i].ext+a[i].wt;
		a[i+1].wt=a[i].tt;
	}
	printf("\nProcess name\tExecution time\tWaiting time\tTurnaround time");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%d\t%d\t%d",a[i].pro,a[i].ext,a[i].wt,a[i].tt);
	}
	sum1=sum2=0;
	for(i=0;i<n;i++)
	{
		sum1=sum1+a[i].wt;
		sum2=sum2+a[i].tt;
	}
	avg1=(float)sum1/n;
	printf("\nAvg waiting time is %f",avg1);
	avg2=(float)sum2/n;
	printf("\nAvg turnaround time is %f",avg2);
}


output

Enter the number of processes :3

Enter the process :p1

Enter the execution time :2

Enter the process :p2

Enter the execution time :1

Enter the process :p3

Enter the execution time :3

Process name	Execution time	Waiting time	Turnaround time
	p1	 		2			0			2
	p2			1			2			3
	p3			3			3			6
Avg waiting time is 1.666667
Avg turnaround time is 3.666667
