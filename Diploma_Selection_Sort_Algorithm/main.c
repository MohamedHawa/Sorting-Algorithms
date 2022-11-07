#include <stdio.h>
#include <stdlib.h>

int arr[7]={7,6,5,4,3,2,1};
SelectionSortAlgorihms(int arr[],int size);
int main()
{
    int i=0;
    int size=7;
    SelectionSortAlgorihms(arr,size);
    for(i=0;i<size;i++)
    {
        printf("%i\t",arr[i]);
    }
    printf("\n");

    return 0;
}
SelectionSortAlgorihms(int arr[],int size)
{
      int  min=0;
      int temp=0;
      int i=0,j=0;

    for(i=0;i<size-1;i++)
    {
        min=i;


        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            }
        }


    }

}
/////////////////////////////////////////////////////////
