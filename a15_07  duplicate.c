/*function in C to count a total number of duplicate elements in an array.*/

#include<stdio.h>
#include<conio.h>

int dup(int [], int);
int main()
{
    int n, i, d;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers.\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    d=dup(arr, n);
    printf("The total number of duplicates elements in array is %d.",d);
    getch();
    return 0;
}

int dup(int a[], int n)
{
    int i, j, x=0;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                x++;
                break;
            }
        }
    }
    return x;
}

