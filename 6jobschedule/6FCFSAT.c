// Experiment No. 6
// Aim: Job Scheduling-FCFSAT.
// Name:Luvpreet Kaur
// Roll No.: 304338


#include<stdio.h>
#include<string.h>
typedef struct scheduling
{
int ext,wt,tt,at,st;
char pro[10];
}
sch;
void main()
{
	int n,i,ext,at,wt,tt,sum1,sum2,st;
	float avg1,avg2;
	sch a[10];
	printf("Enter the number of processes :");
	scanf("%d",&n);
         
	for(i=0;i<n;i++)
	{
		printf("\nEnter the process :");
		scanf("%s",&a[i].pro);
		printf("\nEnter the arrival time :");
		scanf("%d",&a[i].at);
		printf("\nEnter the execution time :");
		scanf("%d",&a[i].ext);
	}  
	a[0].at=0;
	a[0].wt=0;
	a[0].st=0;
	for(i=0;i<n;i++)
	{
		a[i].wt=a[i].st-a[i].at;
		a[i+1].st=a[i].st+a[i].ext;
		a[i].tt=a[i].ext+a[i].wt;
	}
	printf("\nProcess name\tArrival time\tExecution time\tWaiting time\tTurnaround time");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t\t%d\t\t%d\t\t%d\t\t%d",a[i].pro,a[i].at,a[i].ext,a[i].wt,a[i].tt);
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

Enter the number of processes :4

Enter the process :p1

Enter the arrival time :0

Enter the execution time :3

Enter the process :p2

Enter the arrival time :1

Enter the execution time :5

Enter the process :p3

Enter the arrival time :3

Enter the execution time :2

Enter the process :p4

Enter the arrival time :9

Enter the execution time :5

Process name	Arrival time	Execution time	Waiting time	Turnaround time
p1		0		3		0		3
p2		1		5		2		7
p3		3		2		5		7
p4		9		5		1		6
Avg waiting time is 2.000000
Avg turnaround time is 5.750000
