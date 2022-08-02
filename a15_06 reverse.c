/*function in C to read n number of values in an array and display it in reverse order.*/

#include<stdio.h>
#include<conio.h>

int reverse(int [], int);
int main()
{
    int n, i;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    int arr[n];
    reverse(arr, n);
    getch();
    return 0;
}

int reverse(int a[], int n)
{
    int i;
    printf("Enter %d numbers.\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=n-1; i>=0; i--)
        printf("%d ",a[i]);
    return 0;
}

