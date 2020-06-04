// Experiment No. 5
// Aim: Macro Pass 1.
// Name:Luvpreet Kaur
// Roll No.: 304338


#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	char mnt[50],mdt[50],temp[50];
	char ch;
	int i=0,mac=0,pc=0;
	fp=fopen("masm1.txt","r");
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if(ch!='\n')
		{
			temp[i]=ch;
			if(mac==1)
			{
				mnt[i]=ch;	
			}
			i++;
		}
		else
		{
			temp[i]='\0';
			if(mac==1)
			{
				mnt[i]='\0';
				mac=2;
				i=0;
			}		
			if(!strcmp(temp,"MACRO"))	
			{
				mac=1;
				i=0;
			}
			if(!strcmp(temp,"MEND"))	
			{
				mac=3;
				mdt[pc]='\0';
			}
			if(mac==2)
			{
				strncpy(&mdt[pc],temp,i);
				pc=pc+i;
				i=0;
			}
		}
	}
	printf("MNT = %s\nMDT = %s\t\n",mnt,mdt);
}

output

MNT = ADD  &A,&B
MDT = MOVER A,BADD A,B	
