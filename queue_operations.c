#include<stdio.h>
#include<stdlib.h>
#define MAX 5 
int choice,ele,rear=-1,front=-1,i;
int a[MAX];
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
    do{
        printf("the queue operations are:\n1.insert\n2.delete\n3.peek\n4.display\n")
        printf("enter the choice(1-5):\n")
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case3:peek();
                    break;
            case 4:display();
                    break;
            case 5:exit(0);

        }
       }while(choice!=5);
}
void enqueue()
{
    rear++;
    front++;
    if(rear==MAX-1)
    {
        printf("queue overflow\n");
    }
    else
    {
        printf("enter element to be inserted:\n");
        scanf("%d",&ele);
        a[rear]=ele;
        rear++;
    
    }
}
void dequeue()
{
    if(rear==-1)
    {
        printf("queue underflow\n");
    }
    else{
        front++;
    }
}
void peek()
{
    if(rear==-1)
    {
        printf("queue underflow\n");
        
    }
    else
    {
        printf("the element in front position is :\n");
        printf("%d",a[front]);

    }
}
void display()
{
    if(rear==-1)
    {
        printf("queue underflow\n");

    }
    else
    {
        for(i=front;front<=rear;i++)
        {
            printf("%d",a[i]);

        }
    }
}