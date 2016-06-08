#include <string.h>
#include <math.h>

void rotate(int *array, int N, int D);

int main(){
    int i;
    int array[] = {1, 2, 3, 4, 5, 6};

    rotate(array, sizeof(array)/sizeof(int), 5);

    for(i=0; i<sizeof(array)/sizeof(int); i++)
        printf("%d\t", array[i]);

    return 0;
}

void rotate(int *array, int N, int D){
    int i, j, *tmp, d;

    tmp = malloc(abs(D) * sizeof(int));

    if(D<0){
        d = abs(D);
        for(i=d; i<N; i++){
            tmp[i%d] = array[i];
            array[i] = array[i-d];
            array[i-d] = tmp[i%d];
        }
    }
    if(D>0){
        for(i=(N-D-1); i>=0; i--){
            tmp[i%D] = array[i];
            array[i] = array[i+D];
            array[i+D] = tmp[i%D];
        }
    }
}
