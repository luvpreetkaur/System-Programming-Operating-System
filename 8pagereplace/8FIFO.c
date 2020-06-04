// Experiment No. 8
// Aim: IMPLEMENTATION OF PAGE REPLACEMENT ALGORITHM (FIF0)
// Name:Luvpreet Kaur
// Roll No.: 304338
		


#include<stdio.h>
#include<string.h>
void main()
{
	int fault=0,i,j,ref[20],frame[20],pos=0,page,size;
	printf("enter the no of pages\n");
		scanf("%d",&page);
	printf("enter the no of references\n");
	for(i=0;i<page;i++)
	{
		scanf("%d",&ref[i]);
	}
	printf("enter the frame size");
		scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		frame[i]=-1;
	}
	for(i=0;i<page;i++)
	{
 		for(j=0;j<size;j++)
		{
		if(ref[i]==frame[j])
		break;
		}
		if(j==size)
		{
		frame[pos]=ref[i];
		pos++;
		fault++;
		if(pos==size)
		pos=0;
		}
		printf("\n\t%d",ref[i]);
		for(j=0;j<size;j++)
		printf("\t%d",frame[j]);
		}
	printf("fault size is=%d",fault);
}











			\*OUTPUT

enter the no of pages
10
enter the no of references
7
0
1
2
0
3
0
4
2
3
enter the frame size3

	7	7	-1	-1
	0	7	0	-1
	1	7	0	1
	2	2	0	1
	0	2	0	1
	3	2	3	1
	0	2	3	0
	4	4	3	0
	2	4	2	0
	3	4	2	3

fault size is=9*\
