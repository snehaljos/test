#include<stdio.h>
#include<stdlib.h>
struct node
{
   int exp;
   int co;
   struct node *link; 
};
struct node *head,*new1=NULL,*new=NULL,*new2=NULL,*new3=NULL,*new4=NULL,*rhead=NULL,*ptr,*rptr1,*ptr1,*ptr2,*ptr3,*ptr4,*rptr,*qhead=NULL,*phead=NULL;
int main()
{
  int a,b,s,d,c,i,x,c;
  char q;
   phead=(struct node*)malloc(sizeof(struct node));
   qhead=(struct node*)malloc(sizeof(struct node));
   rhead=(struct node*)malloc(sizeof(struct node));
   phead->exp=NULL;
   phead->co=NULL;
      phead->link=NULL;
   qhead->co=NULL;
      qhead->link=NULL;
   qhead->exp=NULL;
   rhead->exp=NULL;
   rhead->co=NULL;
   rhead->link=NULL;
    ptr=phead;
    printf("enter the degree of first polynomial\n");
    scanf("%d",&b);
    for(i=b;i>=0;i--)
     {
       new=(struct node*)malloc(sizeof(struct node));
       printf("enter the coefficient of '%d' degree",i);
       scanf("%d",&d);
       
       new->link=NULL;
       
      ptr->link=new;
      new->exp=i;
      new->co=d;
      ptr=new;
     } 
    printf("enter the degree of second polynomial\n");
    scanf("%d",&b);
    ptr2=qhead;
    for(i=b;i>=0;i--)
     {
     
       new=(struct node*)malloc(sizeof(struct node));
       printf("enter the coefficient of '%d' degree",i);
       scanf("%d",&d);
       
       new->link=NULL;
       
      ptr2->link=new;
      new->exp=i;
      new->co=d;
      ptr2=new;
     } 
   
  printf("*************MENU****************\n");
  printf("1.ADDITION\n");
  printf("2.MULTIPLICATION\n");
  printf("3.display\n");
  scanf("%d",&a);
  if(a==1)
  {
   
  rptr=rhead;
   ptr1=phead->link;
   ptr2=qhead->link;
    
   while((ptr1!=NULL)&&(ptr2!=NULL)) 
   {
     if((ptr1->exp)==(ptr2->exp))
       {
         
         new=(struct node*)malloc(sizeof(struct node));
         s=ptr1->co+ptr2->co;
         //printf("%d%d%d",s,ptr1->co,ptr2->co);
         new->co=s;
         new->exp=ptr1->exp;
         new->link=NULL;
         rptr->link=new;
         rptr=new;
         
         ptr2=ptr2->link;
         ptr1=ptr1->link;
       }  
     else if((ptr1->exp)>(ptr2->exp))
     {
       
       new=(struct node*)malloc(sizeof(struct node));
       new->co=ptr1->co;
       new->exp=ptr1->exp;
       new->link=NULL;
       rptr->link=new;
       rptr=new;
       
       ptr1=ptr1->link;
    }
    else
    {
      
      new=(struct node*)malloc(sizeof(struct node));
      new->link=NULL;
      new->co=ptr2->co;
      new->exp=ptr2->exp;
      rptr->link=new;
      rptr=new;
      ptr2=ptr2->link;
    }
    }
 
   }
  if(a==2)
  {
   while(ptr1!=NULL)
     {
       while(ptr2!=NULL)
       {
        c=ptr1->co*ptr2->co;
        x=ptr1->exp+ptr2->exp;
        rptr=rhead->link;
        while((rptr!=NULL)&&(rptr->exp>x)) 
         {
           rptr1=rptr;
           rptr=rptr->link;
         }
        if(rptr->exp==x)
        {
          rptr->co=rptr->co+c;
        }
        else
        {
          new=(struct node*)malloc(sizeof(struct node));
          new->co=c;
          new->exp=x;
          new->link=rptr;
          rptr1->link=new;
        }
        ptr2=ptr2->link;
        }
        ptr1=ptr1->link;
        }       
 }
 if(a==3)
 {
   if(rhead->link==NULL)
   {
   printf("empty list");
   }
  else
   { 
     ptr=rhead->link;
     while(ptr!=NULL)
     {
     printf("sum of two polynomial\n");
     printf("%d ",ptr->co);
     printf("%d ",ptr->exp);
     ptr=ptr->link;
    }   
   }
  } 
 

   
 return 0;
 }    
       
  
