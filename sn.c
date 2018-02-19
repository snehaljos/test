#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *rchild,*lchild;
}*root,*new,*ptr,*ptr1;
void inorder(struct node *p)
{
	if(p!=NULL)
	{
		inorder(p->lchild);
		printf("%d ",p->data);
		inorder(p->rchild);
		}
}
int main()
{
  int a,b,i,f=0,c,d,s;
  char t;
  printf("enter the root");
  scanf("%d",&b);
    root=(struct node*)malloc(sizeof(struct node));
  root->lchild=NULL;
  root->rchild=NULL;
  ptr=root;
  f=0;
  ptr->data=b;
do{
ptr=root;
  printf("1.search");
  printf("2.insert");
  scanf("%d",&d);
  if(d==2)
  {
  printf("enter the number");
  scanf("%d",&c);
  while(ptr!=NULL)
  {
  printf("%d",ptr->data);
   if(c<ptr->data)
   {
    ptr1=ptr;
    ptr=ptr->lchild;
   }
   else if(c>ptr->data)
   {
     ptr1=ptr;
      ptr=ptr->rchild;
     
    }
   else
   {
      f=1;
     printf("it is there");
     break ;
   }
  }    
  if(ptr==NULL)
  {
         new=(struct node*)malloc(sizeof(struct node));
         new->lchild=NULL;
         new->rchild=NULL;
         new->data=c;
  }
  if((ptr1->data)<c)
  {
   ptr1->rchild=new;
  }
  else
  {
  ptr1->lchild=new;
  }
}
 if(d==1)
 {
  f=0;
  printf("enter the element to be searched");
  scanf("%d",&s); 
   while((ptr!=NULL)&&(f==0))
   {
    if(s<ptr->data)
    {
      ptr=ptr->lchild;
     }
    else if(ptr->data==s)
    {
      f=1;
     }
    else 
    {
     ptr=ptr->rchild;
    }
    }
   if(f==1)
   {
     printf("item is found SJ");
   }
   else 
   {
     printf("not found");    
   }  
    } 
    inorder(root); 
 printf("do you want to continuey/n");
 scanf("%s",&t);
  
} while(t=='y');
 {
  return 0;
  }
 } 
       
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
