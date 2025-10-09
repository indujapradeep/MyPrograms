#include<stdio.h>

int main()
{
    int i, arr[10], search, beg, end, middle;
    printf("Enter 10 elements (in ascending order): ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &search);
    beg=0;
    end=9;
    int pos=-1;
    while(beg<=end)
    {
    	middle=(beg+end)/2;
        if(arr[middle]==search)
        {
            printf("\nThe number %d found at Position %d", search, middle+1);
            pos=1;
            break;
    	}
        else if(arr[middle]<search)
             beg=middle+1;
        else
             end=middle-1;
        
    }
    if(pos==-1)
        printf("\nThe number %d is not found in given Array", search);
}
