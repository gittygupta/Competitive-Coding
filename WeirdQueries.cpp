#include <stdio.h>
#include <math.h>

int main()
{
    int t, count, y, s, a, x, b;
    scanf(" %lld", &t);
    while(t--){
        count = 0;
        scanf(" %d", &y);
        s = sqrt(y);
        for(a = s; a>=1; a--){
            x = a*a;
            b = y - x;
            if(b>0 && b<=700){
                count+=b;
            }
            else if(b>700){
                break;
            }
        }
        printf("%d\n", count);
    }

    return 0;
    
}



/*
int main()
{
   long long int t , i ,y , s,p , d,l,c;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld",&y);
        s=sqrt(y);
        for(i=s;i>=1;i--)
        {
          l=i*i;
            d=y-l;
            if(d>0&&d<=700)
               {
                   c+=d;
               }
            else if(d>700)
                break;
        }
        printf("%lld\n",c+i*700);
    }
    return 0;
}
*/
