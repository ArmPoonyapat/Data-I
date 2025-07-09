#include<stdio.h>
#define MAX 100

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
            if (A[j]>A[min])
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

int i,n;
printf("Enter N: ");
scanf("%d",&n);
int A[n];

/*for(i=0;i<MAX;i++)
    A[i]=i+1;
   // */
/*for(i=0;i<MAX;i++)
    A[i]=10-i;
//    */
srand((unsigned) time(NULL));
for(i=0;i<n;i++)
    A[i] = rand()%100+1;
// */
DisplayArray(A,n);
SelectionSort(A,n);
//InsertionSort(A,MAX);
//BubbleSort(A,MAX);
DisplayArray(A,n);

//printf("%d\n",numCompare);
//printf("%d",numSwap);

if(n % 2 ==0)
{
    float m = (A[(n/2)-1] + A[n/2])/2.0;
    printf("%.1f",m);
}else if(n %2 != 0)
        {
            int m1 = A[n/2];
            printf("%d",m1);
        }



return 0;

}
