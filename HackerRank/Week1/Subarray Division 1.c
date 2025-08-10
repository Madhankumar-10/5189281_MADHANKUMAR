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
    int d,m;
    scanf("%d%d",&d,&m);
    int sum,count=0;
    for(int i=0;i<n-m+1;i++){
        sum=0;
        for(int j=i;j<i+m;j++){
            sum+=arr[j];
        }
        if(sum==d){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}