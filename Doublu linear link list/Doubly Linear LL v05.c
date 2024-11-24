#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
        struct Node *Prev;
        int Data;
        struct Node *Next;
};

void  Insert_First( struct Node **First ,int  No )
{
            struct Node *NewN=NULL;

            NewN =(struct Node*)malloc(sizeof(struct Node));

            NewN->Data = No;
            NewN->Next = NULL;
            NewN->Prev = NULL;

            if( NULL == *First )
            {
                        *First = NewN;
                        printf("\n\n Inside if block of insert first");
            }
            else
            {
                        NewN->Next = *First;
                        (*First)-> Prev = NewN;
                        *First = NewN;
            }

            printf("\n %d Element inserted  at first position successfully",No);

            return;
}
void  Insert_Last( struct Node **First ,int  No )
{
            struct Node *NewN=NULL;

            NewN =(struct Node*)malloc(sizeof(struct Node));

            NewN->Data = No;
            NewN->Next = NULL;
            NewN->Prev = NULL;

            if( NULL == *First )
            {
                        *First = NewN;
                        printf("\n\n Inside if block of insert Last");
            }
            else
            {
                struct Node* Temp=*First;
                while(Temp -> Next!=NULL)
                {
                    Temp=Temp->Next;

                }
                Temp ->Next=NewN;
                NewN ->Prev=Temp;
            }

            printf("\n %d Element inserted  at Last position successfully",No);

            return;
}
void Delete_First(struct Node **First)
{
    if(NULL == *First)
    {
        printf("\n Link List Already Empty, Can't Delete Any Element !!!!");
    }
    else
    {
        struct Node *Temp = *First;
        *First = Temp -> Next;

        printf("\n\n Deleted First Element in LL is =%d.",Temp -> Data);
        free(Temp);

        if(*First !=NULL)
        {
            (*First)->Prev =NULL;
        }
}
return;
}

void Delete_Last(struct Node **First)
{
    if(NULL ==*First)
    {
        printf("\n Link List Already Empty, Can't Delete any Element !!!!!!");
    }
    else
    {
        struct Node *Temp =*First;
        if(Temp ->Next==NULL)
        {
            *First= NULL;
            printf("\n\n Deleted First Element in LL is =%d.",Temp ->Data);

            free(Temp);
        }
        else
            {
            while(Temp ->Next ->Next!= NULL)
            {
                Temp=Temp->Next;
            }
            printf("\n\n Deleted Last Element in LL is =%d.",Temp->Next->Data);
            free(Temp->Next);
            Temp->Next=NULL;
        }
    }
    return;
}
int Count_LL_Nodes(struct Node *First)
{
    int cnt=0;
    while(First !=NULL)
    {
        cnt++;
        First=First->Next;
    }
    return cnt;
}
void  Display_LL(struct  Node  *First)
{
            if( NULL == First )
            {
                printf("\n Given link list is already empty!!!");
            }
            else
            {
               printf("\n Elements in given link list are => \n\n\t\t");

               printf(" NULL <--> ");
                    while( First != NULL )
                            {
                                printf(" | %d | <-->", First->Data);
                                First = First->Next;
                            }
            }
            printf(" NULL ");
            return;

}
int main()
{
        struct Node *Head = NULL;

        Display_LL(Head);
        getch();

        Insert_Last(&Head, 11);
        getch();
        Insert_First(&Head, 10);
        getch();
        Insert_First(&Head, 30);
        getch();
        Insert_Last(&Head, 12);
        getch();
        Insert_First(&Head, 50);
        getch();
        Insert_First(&Head, 70);
        getch();
        Insert_Last(&Head, 13);
        getch();
        Insert_First(&Head, 90);
        getch();

        system("cls");
        Display_LL(Head);
        getch();
        printf("\n Element Count = > %d.",Count_LL_Nodes(Head));

        Delete_First(&Head);
        Display_LL(Head);
        getch();

        printf("\n Element Count = > %d.",Count_LL_Nodes(Head));
        getch();

        Delete_Last(&Head);
        Display_LL(Head);

        printf("\n Element Count = > %d.",Count_LL_Nodes(Head));

        getch();
        return 0;
}



