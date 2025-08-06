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
    float a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=1){
            a++;
        }
        else if (arr[i]==0) {
            c++;
        }
        else {
            b++;
        }
    }
    float x = a/n;
    float y = b/n;
    float z = c/n;
    printf("%.6f\n%.6f\n%.6f",x,y,z);
    return 0;
}