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

        int x = 0;
        for(int i = 0; i<n; i++){       // to get the max value among the numbers entered
            if(x<=colours[i]){
                x = colours[i];
            }
        }

        for(int i = 0; i<n-1; i++){

            for(int j = i+1; j<n; j++){
                if(colours[i]==colours[j]){
                    colours[j]+=x;
                    count++;
                    x = colours[j];
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

