#include<stdio.h>
struct node
  {
  	int data;
  	struct node  *link;
  };
struct node *h1,*h2,*header,*ptr;
int main ()
{
    int a,b,c;
    char d;
do{
    printf("select operation\n");
    printf("1.front\n");
    printf("2.back\n");
    printf("3.any position");
    printf("4.display\n");
    scanf("%d",&a);
    if(a=1)
    {
    	 printf("enter the value\n");
    	 scanf("%d",&b);
    	 h1=(struct node *)malloc(sizeof(struct node));
         h1-->data=b;
         h1-->link=header-->link;
         header-->link=header;
    }
    if(a=2)
    {
    	 ptr=header-->link;
    	 printf("enter the value");
    	 scanf("%d",&c);
    	 h2=(struct node *)malloc(sizeof(struct node));
    	 while(ptr-->link!=NULL)
    	 {
    	 	ptr=ptr-->link;
    	 }
    	 ptr-->link=h2-->link;
    	 h2-->link=NULL;
    	 h2-->data=c;
    }
    if(a=4)
    {
    	ptr=header;
    	while(ptr-->link!=NULL)
    	{
    		ptr=ptr-->link;
		    printf("%d ",ptr-->data);
    	}
    }
    printf("do you want to continue y/n");
    scanf("%s",&d);
}

while(d=='y');
return 0;
}
