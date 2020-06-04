// Experiment No. 7
// Aim: Bankers Algorithm.
// Name:Luvpreet Kaur
// Roll No.: 304338


#include<stdio.h>
int safe_seq[10],avl[10],tavl[10],work[10],reg[10],temp[10];
int alloc[10][10],max[10][10],need[10][10];
int sum=0,n1,n2,n3,flag,k,l,i,j,count=0;
char finish[5];
void main()
{
	printf("\nEnter the number of processes : ");
	scanf("%d",&n1);
	printf("\nEnter the number of resources : ");
	scanf("%d",&n2);
	printf("\nEnter the allocation matrix : ");
	printf("\n.....\n");
	for(i=0;i<n1;i++)
	{
		printf("\nEnter the allocation matrix for %d : ",i);
		for(j=0;j<n2;j++)
		{
			scanf("%d",&alloc[i][j]);
		}
	}
	printf("\nEnter the max matrix : ");
	printf("\n...\n");
	for(i=0;i<n1;i++)
	{
		printf("\nEnter the max resources %d : ",i);
		for(j=0;j<n2;j++)
			scanf("%d",&max[i][j]);
	}
	printf("\nEnter the available resources : ");
	for(j=0;j<n2;j++)
		scanf("%d",&avl[j]);
	printf("\nThe need matrix\n : ");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			need[i][j]=max[i][j]-alloc[i][j];
			printf("%d\t",need[i][j]);
		}
		printf("\n");
	}
	printf("\nThe total available : ");
	for(j=0;j<n2;j++)
	{
		sum=0;
		for(i=0;i<n1;i++)
		{
			sum=sum+alloc[i][j];
			finish[i]='F';
		}
		tavl[j]=sum+avl[j];
		printf("%d",tavl[j]);
		work[j]=avl[j];
	}
	printf("\nThe finish : ");
	for(i=0;i<n1;i++)
		printf("%c",finish[i]);
	for(j=0;j<n2;j++)
		printf("%d",work[j]);
				
	flag=0,k=0;l=0;
	loop:for(i=0;i<n1;i++)
	
		if(temp[i]!=1)
		{
			for(j=0;j<n2;j++)
				if(work[j]<need[i][j])
					flag=1;
			if(flag==0)
			{
				printf("\nProcess %d executed",i);
				printf("\nAvailable =\t");
				for(j=0;j<n2;j++)
				{
					work[j]=work[j]+alloc[i][j];
					printf("%d\t",work[j]);
				}
				count++;
				temp[i]=1;
				safe_seq[count-1]=i;
			}
			else
				flag=0;
		}
	}
	if(count!=n1)
		goto loop;
	for(i=0;i<n1;i++)
		if(work[i]==tavl[i])
		{
			printf("\nSafe sequence : ");
			for(i=0;i<n1;i++)
				printf("P%d\t",safe_seq[i]);
		}
}
	

/* OUTPUT
enter the no. of process5

enter the no. of resources3

enter the no. of allocation matrix
...........

enter the allocation matrix for 0=0 1 0

enter the allocation matrix for 1=2 0 0

enter the allocation matrix for 2=3 0 2

enter the allocation matrix for 3=2 1 1

enter the allocation matrix for 4=0 0 2

enter the no. of max matrix
...........

enter the max matrix for 0=7 5 3

enter the max matrix for 1=3 2 2

enter the max matrix for 2=9 0 2

enter the max matrix for 3=2 2 2

enter the max matrix for 4=4 3 3

 enter the available resources=3 3 2

 enter the need matrix7	4	3	
1	2	2	
6	0	0	
0	1	1	
4	3	1	

 the total available1057FFFFF332
 process 1 executed
 available=	5	3	2	
 process 3 executed
 available=	7	4	3	
 process 4 executed
 available=	7	4	5	
 process 0 executed
 available=	7	5	5	
 process 2 executed
 available=	10	5	7	
 SAFE SEQUENCE=
 SAFE SEQUENCE=
 SAFE SEQUENCE=P1	P3	P4	P0	P2	*/



