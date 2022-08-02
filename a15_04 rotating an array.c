/*function to rotate an array by n position in d direction.*/

#include<stdio.h>
#include<conio.h>

int rotate(int [], int);
int main()
{
    int n, i, arr[n];
    printf("How many numbers you want to enter?\n");
    scanf("%d",&n);
    printf("Enter those numbers.\n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
        //scanf("%d",arr);
    rotate(arr, n);
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    getch();
    return 0;
}

int rotate(int a[], int n)
{
    int p, d, x, i, b;
    printf("Enter how many position you want to rotate the array.\n");
    printf("And enter 1 for left and 0 for right direction.\n");
    scanf("%d %d",&p,&d);
    if(d==1)
    {
        for(x=0; x<p; x++)
        {
            b=a[0];
            for(i=0; i<n-1; i++)
                a[i]=a[i+1];
            a[i]=b;
        }
    }
    else
    {
        for(x=0; x<p; x++)
        {
            b=a[n-1];
            for(i=n-1; i>0; i--)
                a[i]=a[i-1];
            a[i]=b;
        }
    }
}
