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
    char arr[1000];
    fgets(arr, sizeof(arr), stdin);
    int l = strlen(arr);
    int ans[26],n;
    for(int i=0;i<26;i++){
        ans[i]=0;
    }
    for(int i=0;i<l;i++){
        arr[i]=tolower(arr[i]);
        if(arr[i]>='a' && arr[i]<='z'){
            n=(int)arr[i]-97;
            ans[n]+=1;
        }
    }
    int flag=0;
    for(int i=0;i<26;i++){
        if(ans[i]==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("pangram");
    }
    else{
        printf("not pangram");
    }   
    return 0;
}