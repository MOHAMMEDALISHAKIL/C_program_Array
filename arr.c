#include<stdio.h>
int partition(int ar[],int l,int h)
{
    int pivot = ar[l];
    int i=0, j=h+1;
    while(i<j)
    {
        do
        {
            i++;
        }
        while(pivot>=ar[i]);

        do
        {
            j--;
        }
        while(pivot<ar[j]);

        if(i<j)
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }
    int temp = ar[l];
    ar[l] = ar[j];
    ar[j] = temp;
    return j;
}
void quicksort(int ar[], int l, int h){
    if(l<h){
        int j = partition(ar,l,h);
        quicksort(ar,l,j);
        quicksort(ar,j+1,h);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the array: ");
    int i;
    for(i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    quicksort(ar,0,n-1);

    printf("Sorted array: ");
    for(i = 0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }
}
