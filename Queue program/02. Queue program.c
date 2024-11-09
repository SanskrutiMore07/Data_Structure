#include<stdio.h>
#include<conio.h>
#define Max 5

int Queue[Max],Front = -1,Rear = -1;

int IsFull()
{
    if(Rear==Max-1)
    {
        return 1;
    }
    return 0;
}
int IsEmpty()
{
    if(Front == -1)
    {
        return 1;
    }
    return 0;
}

void Enqueue()
{
    int x = 0 ;
    if(IsFull())
    {
        printf("Queue is Full !!!!!");
    }
       Rear++;
       printf("\n Enter value for Queue :");
       scanf("%d",&x);

       if(IsEmpty())
       {
           Front++;
       }
}
void Dequeue()
{
    if(IsEmpty())
    {
        printf("Queue is empty!!!!!");
        return;
    }
        printf("\n Deleted item is  %d ",Queue[Rear]);
        if(Front==Rear)
        {
            Front=Rear=-1;
        }
        else
        {
            Front++;
        }

}
void Display()
{
     int i=0;
     if(IsEmpty())
    {
        printf("\nQueue is Empty");
        return;
    }
    for(i=Front;i>=Rear;i++)
    {
        printf("\t %d",&Queue[i]);
    }
}
int main()
{
    int Choice = 0;
    printf("\n\t 1.Enqueue \n\t 2.Dequeue \n\t 3.Display \n\t 4.Exit\n\t");

    while(1)
    {
        printf("\n Enter Your Choice:");
        scanf("%d",&Choice);
        switch (Choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;
        case 4:
            return 1;
        default:
            printf("\n Invalid Choice!!!");
            break;
        }
    }
    getch();
    return 0;
}

