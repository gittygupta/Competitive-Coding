#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a, b, c, temp = 0, count = 0;
    scanf(" %d %d %d", &a, &b, &c);

    int sum = 0;
    while(a>0 || b>c){
        sum = a*100 + b;
        count++;
        sum = sum-c;
        a = sum/100;
        b = sum%100;

        temp = a;
        a = b;
        b = temp;

        if(sum<c){
            break;
        }

    }

    printf("%d \n", count);


    return 0;
}

/*int main()
{
    int a, b, c;
    int temp = 0;
    int count = 0;
    scanf(" %d %d %d", &a, &b, &c);

    while(a>0 || b>c)
    {
        b-=c;
        if(b<0){
            b+=100;
            a--;
        }
        temp = a;
        a = b;
        b = temp;
        count++;
    }

    printf("%d \n", count);


    return 0;
}*/

