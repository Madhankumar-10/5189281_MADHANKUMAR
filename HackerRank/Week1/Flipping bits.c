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
    unsigned int n;
    for(int i=0;i<t;i++){
        scanf("%u",&n);
        printf("%u\n",~n);
    }
    return 0;
}