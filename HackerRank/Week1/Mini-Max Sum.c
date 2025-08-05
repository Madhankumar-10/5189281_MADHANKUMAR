#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long arr[5];
    for(int i=0;i<5;i++){
        scanf("%ld",&arr[i]);
    }
    int temp,n=5;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    long min=0,max=0;
    for(int i=0;i<n-1;i++){
        min+=arr[i];
    }
    max+=min;
    max+=arr[4];
    max-=arr[0];
    printf("%ld %ld",min,max);
}