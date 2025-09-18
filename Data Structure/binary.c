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
    int mid;
    int l=0;
    int h=n-1;
    while(l<=h)
    {
            mid=(l+h)/2;
        
            if(num==a[mid])
            {
                found=1;
                break;
            }
            else if(num<a[mid])
            {
                 h=mid-1;
            }
            else if(num>a[mid])
            {
                l=mid+1; 
            }
    }
    if(found==1)
    {
            printf("number %d find at %d position",num,mid);
    }  
    else
    {
            printf("number %d not find",num);
    }   
};