#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    printf("Enter the %d Elements Value:",n);
    for(i=0;i<n;i++)		scanf("%d",&a[i]);
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j>0 && a[j-1]>a[j];j--)
        {
                temp = a[j];
                a[j] = a[j - 1];
                a[j- 1] = temp;
        }
    }
    printf("Performing Insertion Sort\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
