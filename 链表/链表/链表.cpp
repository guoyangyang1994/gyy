#include <iostream>
#include<string.h>
struct student
{
char name[100];
int age;
student *next;
};

int main(int argc, const char * argv[])
{
int i;
student *p,*q,*head;
head=new student;
head->next=0;
p=head;
for(i=0;i<4;i++)
{
q=new student;
p->next=q;
q->next=0;
scanf("%s %d",q->name,&(q->age));
p=q;
}
p=head->next;
while(p!=0)
{
printf("%s %d",p->name,q->age);
p=p->next;
}
return 0;
}