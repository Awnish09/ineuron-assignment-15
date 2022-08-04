/*function in C to count the frequency of each element of an array.*/

#include<stdio.h>
#include<conio.h>

void frequency(int [], int);
int main()
{
    int n, i;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers.\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    frequency(arr, n);
    getch();
    return 0;
}


void frequency(int a[], int x)
{
    int i, j, k, count;
    for(i=0; i<x; i++)
    {

        for(j=i+1, count=1; j<x; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                for(k=j; k<x; k++)
                       a[k]=a[k+1];
                x--;
                j--;
            }
        }
        printf("The frequency of \'%d\' is %d.\n",a[i],count);
    }

}
