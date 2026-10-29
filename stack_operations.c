#include<stdio.h>
#define MAX 5
#include<stdlib.h>
int choice;
int  a[20],top=-1,value;
void push();
void pop();
void peek();
void display();

void push()
{
    if(top==MAX-1)
    {
        printf("stack  overflow");
        return;
    }

    printf("enter the element:");
    scanf("%d",&value);
    a[++top] = value;
}


void pop()
{
    if(top==-1)
    {
        printf("stack is underflow");
        return;
    }
    printf("the deleted element is: %d\n",a[top]);
    top -= 1;

}


//give position.display the value in that position.if position greater than 5 and less than 1 then invalid position.
void peek()
{
    int pos;
    printf("enter the position to display the value:");
    scanf("%d", &pos);
    if(pos<1 || pos>top+1)
        printf("invalid position");
    else
    {
        printf("value present in the given position is:");
        printf("%d", a[pos - 1]);
    }
}


void display()
{
    int i;
    printf("the elements in the stack are:\n");
    for (i=0; i<=top;i++)
    {
        printf("%d\n", a[i]);
    }
}
void main()
{
    do
    {
        printf("the stack operations are:");
        printf("1.INSERT\n 2.DELETE\n 3.PEEK\n 4.DISPLAY\n5.EXIT\n");
        printf("enter the choice(1:5):");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
               pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("invalid choice");
        }        
        
    } while (choice!=5);


}