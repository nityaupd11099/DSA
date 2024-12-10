
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}//*first=NULL;
*sec=NULL;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
int count(struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}
void Insert(struct Node *p,int index,int x)
{
 struct Node *t;
 int i;

 if(index < 0 || index > count(p))
 return;
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;

 if(index == 0)
 {
 t->next=first;
 first=t;
 }
 else
 {
 for(i=0;i<index-1;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;

 }


}
int main()
{

 int A[]={10,20,30,40,50};
 create(A,5);


 Insert(first,0,5);
 Insert(first , 3 , 8);
 Insert(first , 7 , 87);
 Display(first);


 //creating using insert

 int sec[]={0};
 Insert(sec , 0 , 2);
 Insert(sec , 1 , 2);
 Insert(sec , 2 , 2);
 Insert(sec , 3 , 2);
 Insert(sec , 4 , 2);
 Insert(sec , 5 , 2);
 Insert(sec , 6 , 2);
 Insert(sec , 7 , 2);
 Display(sec);
 return 0;
}