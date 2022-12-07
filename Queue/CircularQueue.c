#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 3

int rear = -1, front = -1;
int a[MAX];

void insert()
{
    int x;
    printf("\nEnter Element: ");
    scanf("%d", &x);
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("\nQueue Overflow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == MAX - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    a[rear] = x;
}
void delete ()
{
    if (front == -1)
    {
        printf("\nQueue Underflown");
        return;
    }
    printf("%d deleted", a[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front = front + 1;
    }
}
void display()
{
    int i;
    if (front > rear)
    {
        printf("\nQueue is: \n");
        for (i = front; i < MAX; i++)
        {
            printf("%d\n", a[i]);
        }
        for (i = 0; i <= rear; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    else
    {
        printf("\nQueue is: \n");
        for (i = front; i <= rear; i++)
        {
            printf("%d\n", a[i]);
        }
    }
}
int main()
{
    while (1)
    {
        int ch;
        printf("\n1.Insert element");
        printf("\n2.Delete element");
        printf("\n3.Display");
        printf("\n4.End program");
        printf("\nEnter number: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Input!!!");
            break;
        }
    }
    return 0;
}
