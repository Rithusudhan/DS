#include<stdio.h>
#include<stdlib.h>
#define N 5
void create();
void enqueue();
void dequeue();
void display();
int q[N],rear=-1,front=-1,n,i;
int main()
{
int ch;
do
    {
printf("ENTER YOUR CHOICE \n1.insert \n2.delete \n3.diosplay \n4.exit");
scanf("%d",&ch);
switch(ch)
      {
	case 1:
	enqueue();
	break;
 	case 2:
	dequeue();
	break;
	case 3:
	display();
        break;
	case 4:
	exit(0);
	break;
     }
   }while(ch!=0);
  }
void enqueue()
{
int x;
printf("enter the element to insert");
scanf("%d",&x);
if(front==-1&&rear==-1)
  {
   front=rear=0;
  q[rear]=x;
  }
else if((rear+1)%N==front)
  {
    printf("overflow");
  }
  else 
  {
    rear=(rear+1)%N;
    q[rear]=x;
  }
 }

  void dequeue()
    {
      if(front==-1&&rear==-1)
     {
       printf("underflow");
     }
     else if(front==rear)
      {
        printf("\n the deleted element is:%d \n",q[front]);
        front=rear=-1;
      }
     else
      {
        printf("\n the deleted element is %d\n",q[front]);
        front=(front+1)%N;
      }
       }
     void display()
      {
        if(front==-1&&rear==-1)
       {
          printf("underflow");
       }
       else
        {
          for(int i=front;i<=rear;i++)
         {
           printf("%d",q[i]);
           i=(i+1)%N;
}
}

}
 


