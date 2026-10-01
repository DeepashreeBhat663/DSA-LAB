#include<stdio.h>
void main()
{
    int m,n,i;
    char name[20][20];
    printf("enter the number of students:");
    scanf("%d",&m);
    printf("enter the students:");
    for(i=0;i<m;i++)
    {
        scanf("%s",name[i]);
    }
    printf("enter the no.of students to be displayed:");
    scanf("%d",&n);
    printf("the students are:");
    for(i=0;i<n;i++)
    printf("%s\n",name[i]);
    }