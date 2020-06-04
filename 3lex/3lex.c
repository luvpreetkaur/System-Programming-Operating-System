// Experiment No. 3
// Aim: Lexical Analyser
// Name:Luvpreet Kaur
// Roll No.: 304338


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char ip[10],ident[10],lit[10],sym[10];
int i=0,j=0,k=0,m=0;
for(i=0;i<10;i++)
{
ip[i]=0;
ident[i]=0;
lit[i]=0;
sym[i]=0;
}
printf("enter the expression\n\n");
scanf("%s",ip);
//l=strlen(ip);
for(i=0;ip[i]!='\0';i++)
{
	if(isalpha(ip[i]))
	{ 
	ident[j]=ip[i];
	j++;
	}
	else if(isdigit(ip[i]))
	{
	lit[k]=ip[i];
	k++;	
	}
	else	
	{
	sym[m]=ip[i];
	m++;
	}
}

printf("\nidentifiers\tliterals\t\tsymbols");
for(i=0,j=0,k=0,m=0;ip[i]!='\0';i++)
{
printf("\n %c\t\t%c\t\t\t%c",ident[j++],lit[k++],sym[m++]);
}
}


output

enter the expression

a-8=u*y/3

identifiers	literals		symbols
 a		8			-
 u		3			=
 y					*
 					/
 					

