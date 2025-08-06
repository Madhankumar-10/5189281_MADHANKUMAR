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
    int n1;
    scanf("%d",&n1);
    char arr1[n1][20];
    for(int i=0;i<n1;i++){
        scanf("%s",&arr1[i]);
    }
    int n2;
    scanf("%d",&n2);
    char arr2[n2][20];
    for(int i=0;i<n2;i++){
        scanf("%s",&arr2[i]);
    }
    int count=0;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++){
            if(!strcmp(arr2[i],arr1[j])){
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}