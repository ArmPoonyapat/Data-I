#include<stdio.h>
#define MAX 10

int numCompare = 0 , numSwap = 0 ;

void swap (int A[],int j, int k)
{
    int temp;
     temp =A[j];
    A[j] = A[k];
    A[k]=temp;

    numSwap++;

}
void SelectionSort (int A[],int n)
{
    int i,min,j;
    for( i=0;i<=n-2;i++){
         min =i;
        for( j = i+1; j<=n-1;j++){
            if (A[j]<A[min])
                min = j;
            numCompare++;

        }

        swap(A,i,min);
    }
}

void InsertionSort (int A[],int n)
{
    int i,j;
    for( i=1;i<=n-1;i++){
        j=i;
        while (j>0 && A[j]<A[j-1]){
            swap(A,j,j-1);
            j=j-1;

        }
        numCompare++;
    }
}

void BubbleSort (int A[],int n)
{
    int flag=1,i,j;
    for( i=0;i<=n-1 && flag==1;i++){
        flag=0;
        for( j = n-1;j>=i+1;j--){
            if (A[j]<A[j-1]){
                swap(A,j,j-1);
                flag=1;

            }
            numCompare++;
        }

    }
}

void DisplayArray(int A[],int n)
{
    int i ;
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
    printf("\n");
}
int main(){
int A[MAX];
int i;

/*for(i=0;i<MAX;i++)
    A[i]=i+1;
   // */
/*for(i=0;i<MAX;i++)
    A[i]=10-i;
//    */
//srand((unsigned) time(NULL));
for(i=0;i<MAX;i++)
    A[i] = rand()%30+1;
// */
DisplayArray(A,MAX);
//SelectionSort(A,MAX);
//InsertionSort(A,MAX);
BubbleSort(A,MAX);
DisplayArray(A,MAX);

printf("%d\n",numCompare);
printf("%d",numSwap);

return 0;

}
