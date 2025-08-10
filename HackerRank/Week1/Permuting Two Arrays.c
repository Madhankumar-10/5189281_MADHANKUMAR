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
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr1[i]);
        }
         for(int i=0;i<n;i++){
            scanf("%d",&arr2[i]);
        }
        int temp;
        for (int i=0;i<n-1;i++) {
            for (int j=0;j<n-i-1;j++) {
                if (arr1[j]>arr1[j+1]) {
                    temp=arr1[j];
                    arr1[j]=arr1[j+1];
                    arr1[j+1]= temp;
                }
                if (arr2[j]>arr2[j+1]) {
                    temp=arr2[j];
                    arr2[j]=arr2[j+1];
                    arr2[j+1]= temp;
                }
            }
        }
        int sum1,sum2,sum3,flag=1;
        for(int i=0;i<n;i++){
            sum1=arr1[i];
            sum2=arr2[n-i-1];
            sum3=sum1+sum2;
            if(sum3<k){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("YES");
            printf("\n");
        }
        else{
            printf("NO");
            printf("\n");
        }
        t=t-1;
    }
    return 0;
}