#include<stdio.h>
#include<conio.h>
#define Max 5

int stack[Max],Top=-1;

int IsFull()
{
    if(Top==Max-1)
    {
        return 1;
    }
    return 0;
}
int IsEmpty()
{
    if(Top == -1)
    {
        return 1;
    }
    return 0;
}

void push()
{
    int x = 0 ;
    if(IsFull())
    {
        printf("stack is overflow!!!!!");
    }
    else
    {
       printf("\n Enter value of stack =%d",x);
       scanf("%d",&x);
       Top++;
       stack[Top]=x;
    }
}
void pop()
{
    if(IsEmpty())
    {
        printf("stack is underflow");
    }
    else
    {
        printf("\n Deleted item is  %d ",stack[Top]);
        Top--;
    }
}

void Display()
{
     if(IsEmpty())
    {
        printf("stack is Empty");
    }
    else
    {
        int i =0;
        for(i=Top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
    }
}
int main()
{
    int Choice = 0;
    printf("\n\t 1.Push\n\t 2.Pop \n\t 3.Display \n\t 4.Exit\n\t");

    while(1)
    {
        printf("\n Enter Your Choice:");
        scanf("%d",&Choice);
        switch (Choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            return 1;
        }
    }
    getch();
    return 0;
}
