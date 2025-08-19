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
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        int arr[n];
        long sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        int ls=0,flag=0;
        for(int i=0;i<n;i++){
            if(ls==(sum-ls-arr[i])){
                flag=1;
                break;
            }
            ls+=arr[i];
        }
        if(flag==1){
            printf("YES");
        }
        else{
            printf("NO");
        }
        printf("\n");
        t--;
    }
    return 0;
}