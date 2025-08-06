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
    char arr[10];
    for(int i=0;i<10;i++){
        scanf("%c",&arr[i]);
    }
    int h1 = arr[0] - '0';
    int h2 = arr[1] - '0';
    if(arr[8]=='A'){
        if(h1==1 && h2==2){
            arr[0]=arr[1]='0';
        }
    }
    else{
        if(h1==0 && h2<=7){
            arr[0]='1';
            arr[1]=arr[1] + 2;
        }
        else if(h1==0 && h2>=8){
            arr[0]='2';
            arr[1]=arr[1] - 8;
        }
        else if(h1==1 && h2<=1){
            arr[0]='2';
            arr[1]=arr[1] + 2;
        }
    }
    for(int i=0;i<8;i++){
        printf("%c",arr[i]);
    }
    return 0;
}