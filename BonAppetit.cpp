#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int n;
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int colours[n];
        int count = 0;

        for(int i = 0; i<n; i++){
            scanf(" %d", &colours[i]);
        }

        int j = 0;
        for(int i = 0; i<n-1; i++){

            for(int j = i+1; j<n; j++){
                if(colours[i]==colours[j]){
                    colours[j]+=colours[j-1];
                    count++;
                }
                else{
                    continue;
                }
            }
        }

        printf("%d\n", count);
    }
    return 0;
}
