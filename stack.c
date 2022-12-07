#include <stdio.h>
#include <conio.h>
#define MAX 3

int a[MAX], top = -1;
void push()
{
    int data;
    if (top == MAX - 1)
    {
        printf("\noverflow or stack is full !!!");
    }
    else
    {
        printf("\nEnter the element: ");
        scanf("%d", &data);
        top++;
        a[top] = data;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nunder flow STACK or STACK is empty");
    }
    else
    {
        printf("\nPOP or DELETE element: %d", a[top]);
        top--;
    }
}
void display()
{
    int i;
    if (top >= 0)
    {
        printf("\nElement: ");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", a[i]);
        }
    }
    else
    {
        printf("\nTheSTACK is Empty");
    }
}
void peep()
{
    int p;
    printf("\nEnter the position: ");
    scanf("%d", &p);
    if (top - p <= -1)
    {
        printf("\nSTACK is overflow !!!");
    }
    else
    {
        printf("\nThe element is: %d", a[top - p]);
    }
}


void main()
{
    int ch;
    while (1)
    {
        printf("\n1.PUSH or INSERT");
        printf("\n2.POP or DELETE");
        printf("\n3.PEEP or SEARCH");
        printf("\n4.Display");
        printf("\n5.End program");
        printf("\nEnter Choise: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peep();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            exit(0);
        }
        default:
            printf("\ninvalid choise!!!");
        }
        getch();
    }
}
