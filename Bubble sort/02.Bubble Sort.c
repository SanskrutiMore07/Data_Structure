#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Accept_Marks(int *,int);
void Display_Marks(int *,int);
void Bubble_Sort(int *,int);

int main()
{

    int SCnt = 0, *Marks = NULL;

    printf("\n Enter How Many Student Marks Do You Have : ");
    scanf("%d",&SCnt);

    Marks =(int*)malloc(SCnt *sizeof(int));

    Accept_Marks(Marks,SCnt);

    printf("\n Back To Main()\n PRESS KEY  see all student marks.");
    getch();

    Display_Marks(Marks,SCnt);

    printf("\n Back To Main()\n PRESS KEY  see all student Sorted marks.");
    getch();

    Bubble_Sort(Marks,SCnt);
    Display_Marks(Marks,SCnt);

    getch();
    return 0;
}

void Accept_Marks(int  *Num,int size)
{
    int i=0;
    printf("\n Enter %d Student Marks =>\n ",size);
    for(i=0;i<size;i++)
    {
        printf("Enter Marks of Student No %d= ",i+1);
        scanf("%d",&Num[i]);
    }
    return;
}
void Display_Marks(int *Num,int size)
{
    int i=0;
    printf("\n\n Student Marks =>\n\n ");
    for(i=0;i<size;i++)
    {
        printf("\n Marks of %d Student =%d. ",i+1,Num[i]);
    }
    return;
}

void Bubble_Sort(int *Num,int size)
{

    int i=0,j=0,Temp=0;
    for (i=1;i<size;i++)
    {
        for(j=0;j<(size-i);j++)
        {
            if(Num[j]>Num[j+1])
            {
                Temp = Num[j];
                Num[j]=Num[j+1];
                Num[j+1] = Temp;
            }
        }
    }
    return;
}

