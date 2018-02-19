#include<stdio.h>
int main()
{
 
  int ary[100],a,n=100,i,k,top=-1;
  char b;
do{
  printf("      MENU\n");
  printf("1.POP\n");
  printf("2.PUSH\n");
  printf("3.DISPLAY\n");
  printf("enter the number");
  scanf("%d",&a);
  if(a==1)
    {
      if(top==-1)
        {
              printf("empty stack");
        }
      else
        {
              top=top--;
              printf("the deleted element is '%d'",ary[top]);
        }
    }
  if(a==2)
    {
      if(top==(n-1))
        {
              printf("stack full");
        }     
      else
        {
              ++top;
              printf("enter the element");
              scanf("%d",&ary[top]);
        } 

    }

  if(a==3)
      {
          for(k=top;k>=0;k--)
             {
                 printf("%d",ary[k]);
             }    

      }
  printf("do you want to continue y/n");
  scanf("%s",&b);
  }
while(b=='y');   
return 0;


}
