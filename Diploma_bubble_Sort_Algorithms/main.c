#include <stdio.h>
#include <stdlib.h>

int arr[6]={6,5,4,3,2,1};


BubbleSortAlgorithm(int arr[],int size);
int main()
{
    int x=0;
    BubbleSortAlgorithm(arr,6);
    for(x=0;x<6;x++)
    {
       printf("%i\t",arr[x]);
    }
   printf("\n");

    return 0;
}
BubbleSortAlgorithm(int arr[],int size)
{
    int i=0,j=0;
    int temp=0;

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<(size-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }


        }


    }


}
