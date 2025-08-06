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
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int l=0,r=0;
    for(int i=0;i<n;i++){
        l+=arr[i][i];
    }
    int m=n-1;
    for(int i=0;i<n;i++){
        r+=arr[i][m];
        m--;
    }
    int diff;
    diff=abs(l-r);
    printf("%d",diff);
    return 0;
}