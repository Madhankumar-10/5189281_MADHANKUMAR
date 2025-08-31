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
    char n[1000000];
    int k;
    scanf("%s%d",n,&k);
    long long sum1 = 0;
    for(int i=0;i<strlen(n);i++){
        sum1+=(n[i]-'0');
    }
    long long sum2 = sum1*k;
    while(sum2>=10){
        long long sum3 = 0;
        while(sum2>0){
            sum3+=sum2%10;
            sum2=sum2/10;
        }
        sum2=sum3;
    }
    printf("%lld",sum2);
    return 0;
}