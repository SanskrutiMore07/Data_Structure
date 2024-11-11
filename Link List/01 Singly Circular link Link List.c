#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{uct node* NewN=Null;
    NewN=(struct Node*)malloc(sizeof(struct node));
    if(
    int data;
    struct node* Next;
};
void Insert_First(struct node* *First,int No)
{
    struct node* NewN=Null;
    NewN=(struct Node*)malloc(sizeof(struct node));
    if(NewN==Null)
    {
        printf("Malloc failed");

        return;
    }
    NewN->data=No;
    NewN->Next=Null;
    if(*First==Null)
    {
        *First=NewN;
        (*First)->Next=NewN;
    }
    else
    {

      NewN->Next=*First;
      (*First)->Next=NewN;
      *First=NewN;
    }
    return;
}
void Display_ll(struct node* First)
{
    if(Null == first)
    {
        printf("\n Given Link list is Already Empty !!");

    }
    else
    {
        printf("\n Elements in Given link list are =>\n\t");
    }

}
