#include<stdio.h>
#include<omp.h>

int main(){
    int arr[4] = {22,23,24,25};
    int tid;
    #pragma omp parallel num_threads(4) shared(tid)
    {
       tid = omp_get_thread_num();
        printf("\nHello world %d ", arr[tid]);
        printf("\n");
       
   
    }
    return 0;
}