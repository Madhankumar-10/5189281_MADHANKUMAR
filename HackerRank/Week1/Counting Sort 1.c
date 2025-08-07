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
    int n,j;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[100],count;
    for(int i=0;i<100;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr1[j]==i){
                count++;
            }
            
        }
        arr2[i]=count;
        printf("%d ",count);
    }
}