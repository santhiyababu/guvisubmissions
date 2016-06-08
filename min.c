#include <stdio.h>

int main()
{
int a[]={1,5,7,10,2,99,-44};
int min,max,i,j;
min=max=a[0];
int size=sizeof(a)/sizeof(int);
         for(i=0;i<size;i++) {
            for(j=i+1;j<size;j++) {
                 if(min > a[j]) {
                    min = a[j];
                 }
                  if(max < a[j]) {
                      max = a[j];
                   }
            }
        }
    printf("Max=%d and Min=%d",max,min);

    return 0;
}
