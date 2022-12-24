#include <stdio.h>
int main()
{
    int a[1000],i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element in array : \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}