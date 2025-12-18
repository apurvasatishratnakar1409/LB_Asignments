/*
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6  28
*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void DisplayPerfect(PNODE Head)
{
    int i = 0, iSum = 0, No = 0;

    while(Head != NULL)
    {
        No = Head->Data;
        iSum = 0;

        for(i = 1; i <= No / 2; i++)
        {
            if(No % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == No)
        {
            printf("%d  ", No);
        }

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    printf("Perfect numbers are: ");
    DisplayPerfect(First);

    return 0;
}
