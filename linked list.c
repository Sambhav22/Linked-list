 #include<stdio.h>
struct node
{
int info;
struct node *link;
};
struct node *start = NULL;
struct node *createnode()
{
struct node *n;
n = (struct node*)malloc(sizeof(struct node));
return (n);
}
void insertnode()
{
struct node *temp,*t;
temp = createnode();
printf("enter your number");
scanf("%d",&temp->info);
temp->link = NULL;
if (start == NULL)
start=temp;
 else
{
    t = start;
    while(t->link!=NULL)
    {
       t = t->link;
    }
    t->link = temp;
}
}

void deletenode()
{
struct node *r;
 if(start==NULL)
printf("empty");
else
{
r = start;
start=start->link;
free(r);
}}
void viewlist()
{
struct node*t;
if (start == NULL)
printf("empty");
else
t = start;
while(t!=NULL)
{
printf("%d",t->info);
t = t->link;
}
}
void viewlist2(int z)
{
struct node*t;
if (z == NULL)
printf("empty");
else
t = z;
while(t!=NULL)
{
printf("%d",t->info);
t = t->link;
}}
void add()
{
    struct node *r;
    int a=0;
    r = start;
    while(r!=NULL)
    {
        a = a + r->info;
        r = r->link;
    }
printf("%d",a);
}
int reverse()
{
struct node *t1,*t2;
t1 = NULL;
t2 = NULL;
while(start!=NULL)
{


t2 = start->link;
start->link = t1;
t1 = start;
start = t2;}
return(t1);

}
void sorting()
{
    struct node *temp,*t,*k,*cur;
    int y;
    k=start;
    temp = start;

    while(temp!=NULL)
    {
        t = temp->link;
        while(t!=NULL)
        {

            if(temp->info < t->info)
             continue;
            else
            {
                y = temp->info;
                temp->info = t->info;
                t->info = temp->info;
            }
            t=t->link;
        }
        temp=temp->link;
    }
    cur=k;
    while(cur!=NULL)
    {
        printf("%d",cur->info);
        cur=cur->link;
    }
}

int menu()
{
int ch;
printf("1.insert number to the list\n");
printf("2.delete number to the list\n");
printf("3.view list\n");
printf("4.exit\n");
printf("5.add\n");
printf("6 reverse\n");
printf("7.sorting\n");
printf("enter ur choice");
scanf("%d",&ch);
return (ch);
}
void main()
{
while(1)
{
switch(menu())
{int y;
case 1:
insertnode();
break;
case 2:
deletenode();
break;
case 3:
viewlist();
printf("\n");
break;
case 4:
exit(0);
case 5:
add();
printf("\n");
getchar();
getchar();
getchar();
break;
case 6:
y = reverse();
viewlist2(y);
break;
case 7:
    sorting();
    getchar();
    getchar();
    getchar();
    break;
default:
printf("invalid choice\n ");
}}}
