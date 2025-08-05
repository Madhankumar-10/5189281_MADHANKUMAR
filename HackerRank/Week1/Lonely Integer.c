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
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d",arr[i]);
        }
    }
}