#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int LL_Ele_Cnt=0;

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

            LL_Ele_Cnt++

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

            LL_Ele_Cnt++

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

void delete_First(struct Node **First)
{
    if(NULL ==*First)
    {
        printf("\n Link List Already Empty,Cant Delete Any Element!!");
    }
    else
    {
        struct Node *Temp=*First;
        *First = Temp ->Next;
        printf("\n\n Delete 1st Element In LL Is =%d.",Temp->Data);
        free(Temp);
        LL_Ele_Cnt--;
    }
    return;
}

 void Delete_Last(struct Node **First)
{
if(Null == *First)
{

    printf("\n Link List Already Empty ,Cant Delete any Element!!!");

}
else
{
    struct Node *Temp =*First;

    if(Temp ->Next !=Null)
    {

        while(Temp -> Next -> !=Null)
        {
            Temp=Temp->Next;
        }
        printf("\n\n Deleted Last Element in LL is =%d.",Temp->Next->Data);
        free(Temp->Next);

        Temp->Next=Null;
    }
    else
        {
         printf("\n\n Deleted Last Element in LL is =%d.",Temp->Data);
          free(Temp);
          *First=Null;
    }
    LL_Ele_Cnt--;
}
return;
}
void Insert_At_Possition(struct Node **First,int No,int Pos)
{
    int Count=Count_LL_Nodes(*First);
    if(Pos <=0 ||Pos>(Count +1))
    {
        printf("\n\n Invalid Position %d as link list has %d Element",Pos,Count);
    }
    else if(Pos==1)
    {
        Insert_First(First,No);
    }
    else if(Pos==(Count +1))
    {
        Insert_Last(First,No);
    }
    else
    {
        struct Node *NewN=NULL;
         struct Node *Temp=NULL;

         NewN=(struct Node*)malloc(sizeof(struct Node));

         NewN->Data=No;
         NewN->Next=NULL;
         Temp=*First;

         while(Pos>2)
         {
             Temp=Temp->Next;
             Pos--;
         }
          NewN->Next=Temp->Next;
          Temp->Next=NewN;

            LL_Ele_Cnt++;
          printf("\n\n AP=>%d Element Inserted successfully",No);


    }

          return;
}
void Delete_At_Possition(struct Node **First,int Pos)
{

    if(Pos <=0 ||(Pos>LL_Ele_Cnt))
    {
        printf("\n\n Invalid Position  Enter Valid Position Value!!!!!");
    }
    else if(Pos==1)
    {
        delete_First(First);
    }
    else if(Pos==LL_Ele_Cnt)
    {
        delete_Last(First);
    }
    else
    {

         struct Node *Temp1 = *First, *Temp2 = *First

         NewN=(struct Node*)malloc(sizeof(struct Node));

         while(Pos>2)
         {
             Temp1 =Temp1->Next;
             Temp2 =Temp2->Next;
             Pos--;
         }
         Temp2 =Temp2->Next;

         printf("\n \n Deleted element in LL is =%d.",Temp2->Data);

          Temp1->Next=Temp2->Next;

        free(Temp2);


    }

          return;
}
int main()
{
    int Num=0,Loc=0;
    char ch =0;

    struct Node *Head =Null ;

    Up:
        printf("\n\n *************WELLCOME**************\n");
        printf("\n Choices =>");
        printf("\n\t 1>Insert First \n\t 2>Insert Last \n\t 3> Insert At Position \n\t 4> Delete First \n\t 5>Delete Last \n\t 6> Delete At Position \n\t 7> Display Link List \n\t 8> Exit \n   ");
        printf("\n ***************************************************************************\n");
        printf("\n Enter Choice =>");
        ch=getch();

        switch(ch)
        {

        case '1':
            printf("\n Enter value to Insert at 1st position in link list =");
            scanf("%d",&Num);
            Insert _First(&Head,Num);
            getch();

            fflush(stdin);
            system("cls");
            goto Up;

        case '2':
            printf("\n Enter value to Insert at last position in link list =");
            scanf("%d",&Num);
            Insert _Last(&Head,Num);
            getch();

            fflush(stdin);
            system("cls");
            goto Up;

        }

}


