#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    int t,n;
    scanf("%d", &t);
    for(int i = 1; i<=t; i++){
        int count = 0;
        scanf("%d", &n);
        while(n>=5){
            n/=5;
            count+=n;
        }
        printf("%d\n", count);
    }

    return 0;
}


