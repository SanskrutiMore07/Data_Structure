#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Create_Stack();
int Push(int);
int Pop();
int Is_Stack_Full();
int Is_Stack_Empty();
void Display_Stack();


int*Stack=NULL;
int Top = -1;
int Size=0;

int Create_Stack()
{
    printf("\n Enter How Many Element Do You Have =");
    scanf("%d",&Size);

    Stack=(int*)malloc(Size*sizeof(int));
    if(NULL==Stack)
    {
        return -1;
    }
    return 0;
}


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

    int Choice=0,Num=0;
    char ch ='\0';

    if(Create_Stack())
    {
        printf("\n MEMORY ISSUE");
        goto QUIT;
    }
    while(1)
    {
     printf("\n *** Wel-Come To Fork Stack Implementation Program*****");

     printf("\n\n Choices=>");
     printf("\n\t 1.PUSH");
     printf("\n\t 2.POP");
     printf("\n\t 3.DISPLAY STACK");
     printf("\n\t 4.SEARCH ELEMRNT IN STACK");
     printf("\n\t 5.EXIT");

      printf("\n Enter Your Choice:");
      scanf("%d",&Choice);

      switch(Choice)
      {
      case 1:
        printf("\n Enter Value To Insert In Stack=");
        scanf("%d",&Num);

        Push(Num);
        getch();
        system("cls");
        break;

      case 2:
        Pop();
        getch();
        system("cls");
        break;

      case 3:
        Display_Stack();
        getch();
        system("cls");
        break;

      case 4:
        printf("\n Function Not Defined");
        getch();
        system("cls");
        break;

        case 5:
        fflush(stdin);
        printf("\n Are You Sure Want To Exit App (y/n):");
        ch=getchar();

        if(ch=='y'||ch=='y')
        {
            goto QUIT;
        }
        fflush(stdin);
        system("cls");
        break;

        default:
            printf("\n INVALID CHOICE!!!!");
            getch();
            system("cls");
            break;
      }
    }
    QUIT:
        printf("\n Thanks For Using Our App");

        getch();
        return 0;
}
