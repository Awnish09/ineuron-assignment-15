/*function to sort an array of any size.*/

#include<stdio.h>
#include<conio.h>

int sort(int[], int);
int main()
{
    int n, arr[n], i;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    printf("Enter %d numbers.\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    sort(arr, n);
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    getch();
    return 0;
}

int sort(int a[], int n)
{
    int i, j, k, x;
    for(i=0; i<n; i++)
    {
        x=a[i];
        for(j=i+1, k=i; j<n; j++)
        {
            if(x>a[j])
            {
                x=a[j];
                k=j;
            }
        }
        a[k]=a[i];
        a[i]=x;

    }
}
