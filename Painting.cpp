#include<stdio.h>

int main()
{
    int n, m, h;
    scanf(" %d %d %d", &n, &m, &h);

    int area[3] = {n*m, m*h, n*h};

    int t[h], c[h];
    int ans = 0;
    int sum = 0;
    for(int i = 0; i<h; i++){
        scanf("%d %d", &t[i], &c[i]);
        sum+=t[i];
    }

    int k = 0;
    for(int i = 0; i<h; i++){
        if(sum<area[i]){
            k++;
        }
    }
    if(k>=3){
        printf("Impossible");
    }

    else{
        for(int i = 0; i<h; i++){
            ans = ans + t[i]*c[i];
        }
        printf("%d", ans);
    }

    return 0;
}
