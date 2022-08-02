/*function in C to print all unique elements in an array.*/

#include<stdio.h>
#include<conio.h>

void unique(int [], int);
int main()
{
    int n, i, d;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers.\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    unique(arr, n);
    getch();
    return 0;
}

void unique(int a[], int n)
{
    int i, j, x;
    printf("\nThe unique elements in array are-\n");
    for(i=0; i<n-1; i++)
    {
        for(j=0, x=0; j<n; j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
                break;
            x++;
        }
    if(x==n-1)
        printf("%d ",a[i]);
    }
}

