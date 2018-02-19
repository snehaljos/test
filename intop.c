#include<stdio.h>
#include<stlib.h>
char stack[20];
int top=-1;
void push(char m)
{
stack[++top]=m;
}
char pop()
{
if(top==-1)
return -1;
else
return stack[top--];
}
int prio(char m)
{
if(m=='(')
 return 0;
if(m=='+'||m=='-')
 return 1;
if(m=='*'||m=='/')
return 2;
}
void main()
{
char ex[20];
char *e,m;
printf("enter the expression\n");
scanf("%s",ex);
e=ex;
while(*e!='\0')
{
if (isalnum(*e))
 printf("%c",*e);
else if (*e=='(')
 push(*e);
else if(*e==')')
 {
  while((m=pop())!='(')
  printf("%c",m);
 }
else
{
while(prio(stack[top])>=prio(*e))
 printf("%c",pop());
push(*e);
}
e++;
}
while(top!=-1)
 printf("%c",pop());
}

