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
    int n,p,x=0;
    scanf("%d%d",&n,&p);
    int mid=n/2;
    if(p==1 || p==n){
        printf("%d",x);
    }
    else{
        if(p==2 || p==3){
            printf("%d",++x);
        }
        else if(p<mid){
            printf("%d",p/2);
        }
        else{
            if(n%2==0){
                 if(n-p<2){
                    printf("%d",++x);
                 }
                 else{
                    printf("%d",(n-p)/2);
                }
            }
            else{
                printf("%d",(n-p)/2);
            }
        }
    }
    return 0;
}