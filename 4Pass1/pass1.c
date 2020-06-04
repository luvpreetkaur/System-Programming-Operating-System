// Experiment No. 4
// Aim: Pass 1.
// Name:Luvpreet Kaur
// Roll No.: 304338


#include<stdio.h>
#include<string.h>
/*struct intr
{
int loc;	
char op_class[4];	
int op_code;	
char opr1[10];	
};
struct intr b[10];*/
void main()
{
FILE *f1,*f2,*f3;
int lc,sa,l,op1,o,len,opr1,i=0,d;
char m1[20],la[20],op[20],otp[30],class[30];
f1=fopen("Input.txt","r");
f3=fopen("Symtab.txt","w");
fscanf(f1,"%s %s %d ",la,m1,&op1);
if(strcmp(m1,"START")==0)
{
	sa=op1;
	lc=sa;
	printf("\t%s\t%s\t%d\t\n",la,m1,op1);
}
else
lc=0;
fscanf(f1,"%s %s",la,m1);
while(!feof(f1))//tests the end-of-file for the given stream.
{
	fscanf(f1,"%s",op);
	printf("\n%d\t%s\t%s\t%s\n",lc,la,m1,op);
	if(strcmp(la,"-")!=0);
	{
		fprintf(f3,"\n%d\t%s\n",lc,la);
	}
	f2=fopen("Optab.txt","r");
	fscanf(f2,"%s  %d",otp,&o);
	while(!feof(f2))
	{
		if(strcmp(m1,otp)==0)
		{
			lc=lc+3;
			break;
		}
		fscanf(f2,"%s  %d",otp,&o);
	}
	fclose(f2);
fscanf(f1,"%s%s",la,m1);
}
if(strcmp(m1,"END")==0)
{
	printf("Program length = %d\n",lc-sa);
}
fclose(f1);
fclose(f3);
}
/*i=0;
do
{		
strcpy(opr1,op1);		
	i++;
	}
while(strcmp(m1,"END")!=0);
	
i=0;
	do
	{
	d=is_imp(m1);
	if(d!=-1)
	{
	strcpy(b[i].op_class,"IS\0");
	b[i].op_code=d;	
	b[i].loc=b[i-1].loc+1;	
	}
	else
	{
	d=is_ad(m1);
	if(d!=-1)
	{
	strcpy(b[i].op_class,"AD\0");
	b[i].op_code=d;	
	if(d==1)
	{
	b[i].loc=1000;				
	}
	else
	{
	b[i].loc=b[i-1].loc+1;;
	}	
	}	
	else
	{
	strcpy(b[i].op_class,"DL\0");		
	if(strcmp(m1,"DC")==0)
	{
	b[i].op_code=1;	
	}
	else
{					
b[i].op_code=2;
}
b[i].loc=b[i-1].loc+1;
}	
}
i++;
}
while(strcmp(m1,"END")!=0);
printf("\nIntermediate code \n");
i=0;
do
{
printf("%d\t",b[i].loc);
printf("%s\t",b[i].op_class);
printf("%d\t",b[i].op_code);
if(strcmp(b[i].opr1,"-")!=0)
{
printf("%s\t",b[i].opr1);
}

i++;
printf("\n");
}
while(strcmp(m1,"END")!=0);
if(strcmp(m1,"END")==0)
{
	printf("Program length = %d\n",lc-sa);
}
fclose(f1);
fclose(f3);
}	

int is_imp(char is[10])
{
if(strcmp(is,"MOVER")==0)
return(4);
if(strcmp(is,"MOVEM")==0)
return(5);
	if(strcmp(is,"READ")==0)
return(9);
if(strcmp(is,"STOP")==0)
return(0);
return(-1);
}
int is_ad(char is[10])
{
if(strcmp(is,"START")==0)
return(1);
if(strcmp(is,"END")==0)
return(2);
if(strcmp(is,"ORIGIN")==0)
return(5);
return(-1);
}*/
	
