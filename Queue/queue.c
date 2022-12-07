#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 3

int rear=-1, front=-1;
int a[MAX];

void insert()
{
    int x;
    if(rear==MAX-1)
    {
        printf("Overflow!!!\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("\nEnter Element: ");
        scanf("%d",&x);
        rear=rear+1;
        a[rear]=x;
    }
}
void delete()
{
    if(front==-1 || front>rear)
    {
        printf("\nUnderflow!!");
        return;
    }
    else
    {
        printf("\n%d deleted\n", a[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1)
    {

        printf("\nQueue is empty!! ");
    }
    else
    {
        printf("\nQueue is: \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}
int main()
{
    while(1)
    {
    int ch;
    printf("\n1.Insert element\n");
    printf("2.Delete element\n");
    printf("3.Display\n");
    printf("4.End program\n");
    printf("Enter number: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid Input!!!\n");
        break;
    }
    }
    return 0;
}
