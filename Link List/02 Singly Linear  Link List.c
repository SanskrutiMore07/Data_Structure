#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
};


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

int main()
{
            int Num=21;
            struct Node *Head=NULL;
            getch();

            Insert_Last(&Head,Num);
            getch();
            Insert_Last(&Head,75);
            getch();
            Insert_Last(&Head,105);
            getch();
            Insert_Last(&Head,55);
            getch();

            system("cls");
            Display_LL(Head);

            return 0;
}

