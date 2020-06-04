// Experiment No. 6
// Aim: Job Scheduling-RR.
// Name:Luvpreet Kaur
// Roll No.: 304338#include<stdio.h>


#include<conio.h>
void main()
{
int proc[5][3],total=0,st=0,output[5][4],i,j;
int aw=0,at=0,timeq,totalbt=0,currentbt=0;

printf("\n how many process");
scanf("%d",&total);
for(i=0;i<total;i++)
{
printf("\n enter process name");
scanf("%d",&proc[i][0]);
printf("\nenter BT");
scanf("%d",&proc[i][1]);
proc[i][2]=proc[i][1];
totalbt+=proc[i][1];
}
printf("\n enter time quantam=");
scanf("%d",&timeq);
currentbt=0;
while(currentbt<totalbt)
{
for(i=0;i<total;i++)
{
if(proc[i][2]==proc[i][1])
output[i][0]=currentbt;
if(proc[i][2]>0)
{
if(proc[i][2]<=timeq)
{
currentbt+=proc[i][2];
proc[i][2]=0;
output[i][1]=currentbt;
}
else
{
currentbt+=timeq;
proc[i][2]-=timeq;
}
}
}
}
for(i=0;i<total;i++)
{
output[i][2]=output[i][1]-proc[i][1];
output[i][3]=output[i][1];
aw=aw+output[i][2]-0;
at=at+output[i][3]-0;
}
printf("process bt st et wt tat\n");
for(i=0;i<total;i++)
{
printf("%d %d %d %d %d %d\n",proc[i][0],proc[i][1],output[i][0],output[i]
[1],output[i][2],output[i][3]);
}
printf("avg of waiting time %f",(float) aw/total);
printf("avg of tat %f",(float)at/total);

}

/*OUPUT
how many process4

 enter process name1

enter BT5

 enter process name2

enter BT4

 enter process name3

enter BT3

 enter process name4

enter BT8

 enter time quantam=2
process bt st et wt tat
1 5 0 16 11 16
2 4 2 12 8 12
3 3 4 13 10 13
4 8 6 20 12 20
avg of waiting time 10.250000avg of tat 15.250000*/

