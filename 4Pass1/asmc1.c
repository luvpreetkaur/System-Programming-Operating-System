// Experiment No. 4
// Aim: Assembler Pass 1.
// Name:Luvpreet Kaur
// Roll No.: 304338


#include<stdio.h>
#include<string.h>
struct asm1
{	
char label[10];	
char opcode[10];	
char opr1[10];	
char opr2[10];
};
struct intr
{
int loc;	
char op_class[4];	
int op_code;	
char opr1[10];	
char opr2[10];
};
struct asm1 a[10];
struct intr b[10];
int is_ad(char is[10]);
int is_imp(char is[10]);
int main()
{	
int i=0,d;	
//asm a[10];//struct asm a[10];	
printf("Enter Assembly code\n"	);	
do	
{		
printf("Enter the label ");		
scanf("%s",a[i].label);		
printf("Enter the Opcode ");		
scanf("%s",a[i].opcode);		
printf("Enter the oprand 1 ");		
scanf("%s",a[i].opr1);		
printf("Enter the oprand 2 ");		
scanf("%s",a[i].opr2);		
i++;	
}
while(strcmp(a[i-1].opcode,"END")!=0);	
printf("\nYou have entered \n");	
	i=0;
	do	
{
	if(strcmp(a[i].label,"NULL")!=0)
		
{
	printf("%s\t",a[i].label);
		
}
	printf("%s\t",a[i].opcode);
		
if(strcmp(a[i].opr1,"NULL")!=0)
{
printf("%s\t",a[i].opr1);
}
if(strcmp(a[i].opr2,"NULL")!=0)
{
printf("%s\t",a[i].opr2);
}
		i++;
printf("\n");
}
while(strcmp(a[i-1].opcode,"END")!=0);
i=0;
do
{		
strcpy(b[i].opr1,a[i].opr1);		
strcpy(b[i].opr2,a[i].opr2);
	i++;
	}
while(strcmp(a[i-1].opcode,"END")!=0);	
	i=0;
	do
	{
	d=is_imp(a[i].opcode);
	if(d!=-1)
	{
	strcpy(b[i].op_class,"IS\0");
	b[i].op_code=d;	
	b[i].loc=b[i-1].loc+1;	
	}
	else
	{
	d=is_ad(a[i].opcode);
	if(d!=-1)
	{
	strcpy(b[i].op_class,"AD\0");
	b[i].op_code=d;	
	if(d==1)
	{
	b[i].loc=101;				
	}
	else
	{
	b[i].loc=b[i-1].loc+1;;
	}	
	}	
	else
	{
	strcpy(b[i].op_class,"DL\0");		
	if(strcmp(a[i].opcode,"DC")==0)
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
while(strcmp(a[i-1].opcode,"END")!=0);
printf("\nIntermediate code \n");
i=0;
do
{
printf("%d\t",b[i].loc);
printf("%s\t",b[i].op_class);
printf("%d\t",b[i].op_code);
if(strcmp(b[i].opr1,"NULL")!=0)
{
printf("%s\t",b[i].opr1);
}
if(strcmp(b[i].opr2,"NULL")!=0)
{
printf("%s\t",b[i].opr2);
}
i++;
printf("\n");
}
while(strcmp(a[i-1].opcode,"END")!=0);
return(0);
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
}
/* OUPUT
Enter Assembly code
Enter the label NULL
Enter the Opcode START
Enter the oprand 1 NULL
Enter the oprand 2 101
Enter the label NULL
Enter the Opcode READ
Enter the oprand 1 NULL
Enter the oprand 2 A
Enter the label NULL
Enter the Opcode MOVER
Enter the oprand 1 AREG
Enter the oprand 2 A
Enter the label NULL
Enter the Opcode STOP
Enter the oprand 1 NULL
Enter the oprand 2 NULL
Enter the label A
Enter the Opcode DS
Enter the oprand 1 NULL
Enter the oprand 2 1
Enter the label NULL
Enter the Opcode END
Enter the oprand 1 NULL
Enter the oprand 2 NULL 

You have entered 
START	101	
READ	A	
MOVER	AREG	A	
STOP	
A	DS	1	
END	

Intermediate code 
101	AD	1	101	
102	IS	9	A	
103	IS	4	AREG	A	
104	IS	0	
105	DL	2	1	
106	AD	2	
