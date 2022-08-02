/*function to find the greatest number from the given array of any size.*/

#include<stdio.h>
#include<conio.h>

int greatest_num(int[], int);
int main()
{
    int n, num, arr[n];
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    //for(i=0; i<n; i++)
      //  scanf("%d",&arr[i]);
    num= greatest_num(arr, n);
    printf("The greatest number of all is %d",num);
    getch();
    return 0;
}

int greatest_num(int a[], int n)
{
    int i, x;
    printf("Enter %d numbers.\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0, x=a[i]; i<=n; i++)
    {
        if(x<a[i])
            x=a[i];
    }
    return x;
}
