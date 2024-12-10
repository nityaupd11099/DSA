#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}; *root=NULL;
void insert( int key){
    struct Node *t= root;
    struct Node *r, *p;

    if(root== NULL)
    {
        p=(struct Node *)malloc (sizeof(struct Node ));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
    }
    while (t!=NULL)
    {
        r=t;
        if(key<t->data)
            t=t->lchild;
        else if (key>t->data)
             t=t->rchild;
        else
            return;
    }
 p=(struct Node *)malloc (sizeof(struct Node ));
        p->data=key;
        p->lchild=p->rchild=NULL;

if(key<t->lchild) r->lchild=p;
else r->rchild=p;

void Inorder(struct Node *p)
{
    if(p)
    Inorder(p->lchild);
    printf("%d" , p->data);
    Inorder(p->rchild);
    }
}
struct Node * search (int key)
{
    struct Node * t=NULL;
    while(t!= NULL)
    {
        if(key==t->data) return t;
         else if(key<t->data) t->lchild=t;
        else(key> t->data) t->rchild=t;
    }
}
    int main()
    {
        struct Node * temp;
insert(10);
insert(5);
insert(20);
Inorder(root);
temp =search(5);
if (temp!=NULL)
printf("element %d" , temp-> data);
else printf("not found");
return 0;
    }
