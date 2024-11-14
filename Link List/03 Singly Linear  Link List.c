#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
};

void Insert_First(struct Node **First ,int No)
{
            struct Node *NewN=NULL;

            NewN=(struct Node*)malloc(sizeof(struct Node));

            NewN ->Data=No;
            NewN ->Next=NULL;

            if(NULL ==*First)
            {
                *First =NewN;
                printf("\n\n Inside if block of insert first");
            }
            else
            {
                 NewN ->Next =*First;
                 *First=NewN;
                 printf("\n\n Inside else block of insert First");
            }
            printf("\n %d Element Inserted Successfully",No);

            return;
}
void Insert_Last(struct Node **First ,int No)
{
            struct Node *NewN=NULL;

            struct Node *Temp =NULL;

            NewN=(struct Node*)malloc(sizeof(struct Node));

            NewN ->Data=No;
            NewN ->Next=NULL;

            if(NULL ==*First)
            {
                *First =NewN;
                printf("\n\n Inside if block of insert Last");
            }
            else
            {
                Temp=*First;
                while(Temp->Next!=NULL)
                {
                    Temp=Temp->Next;
                }
                Temp->Next=NewN;
                 printf("\n\n Inside else block of insert Last");
            }
            printf("\n %d Element Inserted Successfully",No);

            return;
}
void Display_LL(struct Node *First)
{
            if(NULL==First)
            {
                printf("\n Given Link List is Already Empty!!!!!");
            }
            else
            {
                printf("\n Elements in Given Link List Are =>\n\t");
                while(First!=NULL)
                {
                    printf(" | %d | ->",First->Data);
                    First=First->Next;
                }
            }
            printf("NULL");
            return;
}
int Count_LL_Nodes(struct Node *First)
{
    int Count=0;
    if(NULL !=First)
    {
        while(First!=NULL)
        {
            Count++;
            First=First->Next;
        }
    }
    return Count;
}
int main()
{
            int Num=21;
            struct Node *Head=NULL;

            printf("\n\n No.of Element in LinkList are :%d.",Count_LL_Nodes(Head));
            getch();

            Insert_Last(&Head,Num);
            getch();
            Insert_Last(&Head,75);
            getch();
            Insert_Last(&Head,105);
            getch();
            Insert_First(&Head,55);
            getch();

            printf("\n\n No.of Element in LinkList are :%d.",Count_LL_Nodes(Head));

            Insert_Last(&Head,48);
            getch();
            Insert_First(&Head,631);
            getch();
            Insert_First(&Head,95);
            getch();
            Insert_Last(&Head,15);
            getch();

            system("cls");
            Display_LL(Head);

            printf("\n\n No.of Element in LinkList are :%d.",Count_LL_Nodes(Head));

            getch();
            return 0;
}
