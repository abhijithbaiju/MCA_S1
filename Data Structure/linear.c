#include<stdio.h>
int main()
{
    int a[10],i,n,num,found=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    if(num==a[i])
    {
        found=1;
        break;
    }
    if(found==1)
    {
        printf("number %d find at %d position",num,i);
    }
    else
    {
        printf("number %d not find",num);
    }
};