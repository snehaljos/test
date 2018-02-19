#include<stdio.h>
struct node
  {
	int data;
	struct  node *link;
  };
struct node *header,*ptr,*temp;
void front();
void end();
void any();
void display();
void main()
{
int choice;
int cont=1;
header=(struct node *)malloc(sizeof(struct node));
header->data=NULL;
header->link=NULL;
while(cont==1)
{
	printf("\n1.front\n");
	printf("\n2.end\n");
	printf("\n3.any position\n");
	printf("\n4.display\n");
	printf("\n enter a no:");
	scanf("%d",&choice);
switch(choice)
{
	case 1:front();
		break;
	case 2:end();
		break;
	case 3:any();
		break;
	case 4:display();
		break;
}
printf("\ndo you want to continue?(1/0):");
scanf("%d",&cont);
}}

void front()
{
  int value;
  printf("enter data :");
  scanf("%d",&value);
  temp=(struct node *)malloc(sizeof(struct node));
  temp->data=value;
  temp->link=header->link;
  header->link=temp;
}

void end()
{
  int value;
  printf("enter data :");
  scanf("%d",&value);
  temp=(struct node *)malloc(sizeof(struct node));
  ptr=header;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
  temp->data=value;
  temp->link=ptr->link;
  ptr->link=temp;
}

void any()
{
  int value,key;
  printf("\n enter data :");
  scanf("%d",&value);
  printf("\n enter data of the node after which new node is to be inserted:");
  scanf("%d",&key);
  temp=(struct node *)malloc(sizeof(struct node));
  ptr=header;
	while(ptr->link!=NULL && ptr->data!=key)
	{
		ptr=ptr->link;
	}
	if(ptr->data==key)
	{
		temp->data=value;
		temp->link=ptr->link;
		ptr->link=temp;
	}
	else
	{
		printf("\nvalue %d not found",key);
	}
}
void display()
{
  printf("\nelements of linked list:\n");
  ptr=header;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		printf("%d ",ptr->data);
	}
}

