// Experiment No. 8
// Aim: IMPLEMENTATION OF PAGE REPLACEMENT ALGORITHM (LRU)
// Name:Luvpreet Kaur
// Roll No.: 304338



#include<stdio.h>
//#include<conio.h>
void main()
{
int ref[20],frame[20],pref[20];
int i,j,k,t_page,f_size,p_fault=0,min=0,n,pos;
//clrscr();
printf("\nEnter no. of Pages = ");
scanf("%d",&t_page);
printf("\nEnter the Page\n");
for(i=0;i<t_page;i++)
scanf("%d",&ref[i]);
printf("\nEnter Frame size ");
scanf("%d",&f_size);
for(i=0;i<f_size;i++)
{
frame[i]=-1;
pref[i]=-1;
}
for(i=0;i<t_page;i++)
{
n=0;
for(k=0;k<f_size;k++)
{
if(ref[i]==frame[k])
{
pref[k]=i;
break;
}
}
if(k==f_size)
{
for(k=0;k<f_size;k++)
{
if(frame[k]==-1)
{
frame[k]=ref[i];
pref[k]=i;
p_fault++;
n=1;
break;
}
// if end
}
//for end
if(n!=1)
{
min=9999;
for(k=0;k<f_size;k++)
{
if(min>pref[k])
{
min=pref[k];
pos=k;
}
}
frame[pos]=ref[i];
pref[pos]=i;
p_fault++;
}
} //if end
printf("\n\t%d",ref[i]);
for(k=0;k<f_size;k++)
printf("\t%d",frame[k]);
}
//for end
printf("\n\n\nTotal Page Pault= %d",p_fault);

}
/* OUTPUT
Enter no. of Pages = 19

Enter the Page
1 2 3 4 2 1 5 6 1 2 3 7 6 3 2 1 2 3 6

Enter Frame size 3

	1	1	-1	-1
	2	1	2	-1
	3	1	2	3
	4	4	2	3
	2	4	2	3
	1	4	2	1
	5	5	2	1
	6	5	6	1
	1	5	6	1
	2	2	6	1
	3	2	3	1
	7	2	3	7
	6	6	3	7
	3	6	3	7
	2	6	3	2
	1	1	3	2
	2	1	3	2
	3	1	3	2
	6	6	3	2


Total Page Pault= 14*/
