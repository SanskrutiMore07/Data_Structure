#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int Push(int);
int Pop();
int Is_Stack_Full();
int Is_Stack_Empty();
void Display_Stack();

int Top = -1;

int Stack[Size] = {};

int Is_Stack_Full()
{
    if(Top == Size-1)
    {
        return 1;
    }
    return 0;
}

int Is_Stack_Empty()
{
    if(Top == -1)
    {
        return 1;
    }
    return 0;
}

int Push(int Ele)
{
    if(Is_Stack_Full())
    {
        printf("\n Stack Already Full, Can't Insert New Element...");
        return -1;
    }
    else
    {
        Stack[Top + 1] = Ele;
        Top++;
        printf("\n Element %d Inserted at Position %d in Stack.", Ele, Top);
    }
    return 0;
}

int Pop()
{
    if(Is_Stack_Empty())
    {
        printf("\n Stack Already Empty, Can't Remove Element...");
        return -1;
    }
    else
    {
            printf("\n Deleted Element From Stack is = %d.", Stack[Top]);
            Stack[Top] = 0;
            Top--;
    }
    return 0;
}

void Display_Stack()
{
    int i = 0;

    if(Is_Stack_Empty())
    {
        printf("\n Stack Already Empty, Can't Display Any Element...");
    }
    else
    {
        printf("\n ==================***************==================\n");
        printf("\n Elements in Stack are => \n");

        for(i = Top; i >= 0; i--)
        {
            printf("\n\t\t |%d| ", Stack[i]);
        }
        printf("\n ===================*****************===================\n");
    }
    return;
}

int main()
{
    Display_Stack();
    getch();

    Push(15);
    Push(27);
    Push(54);

    Display_Stack();

    printf("\n INSIDE MAIN()1");
    getch();

    Pop();
    Pop();
    printf("\n INSIDE MAIN()2");
    getch();

    Push(89);
    Push(66);
    Push(685);
    Push(34);
    Push(77);
    Push(101);
    Push(555);

    Display_Stack();
    getch();
    return 0;
}

