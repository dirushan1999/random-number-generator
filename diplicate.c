#include<stdio.h>
#include<conio.h>
#include<time.h>
int arr[9];

int main()
{

    srand(time(NULL));
    int i=0,j=0,k;

    for(i=0;i<9;i++){

        arr[i]=rand()%10;


       k=0;

srand(time(NULL));
       while(k<i)
       {

          if(arr[i]==arr[k]){

              even:
                arr[i]=rand()%10;


          for(int m=0;m<i;m++){
            if(arr[m]==arr[i])
            {
                goto even;
            }
          }

          }


          else if(arr[i]!=arr[k])
          {

              k=k+1;


          }
       }

           }


for(int d=0;d<9;d++)
{



    printf("%d\t",arr[d]);



}





}
















