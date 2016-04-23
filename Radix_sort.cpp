#include<cstdio>
#include<cstring>
using namespace std;
#define s scanf
#define p printf
#define loop for(i=0;i<n;++i)
int digit;
int dig_radix(int num)
{
    if(digit==0)
    {
        return num%10;
    }
    if(digit==1)
    {
        num/=10;
        return num%10;
    }
    if(digit==2)
    {
        num/=100;
        return num%10;
    }
    if(digit==3)
    {
        num/=1000;
        return num%10;
    }
    if(digit==4)
    {
        num/=10000;
        return num%10;
    }
}
typedef struct
{
    int a,b;
}
ST;
ST arr[100],ans[100];
int c[100];
int main()
{
    int n,i,j;
    while(s("%d",&n)==1)
    {
        loop
        s("%d",&arr[i].b);

        for(digit=0;digit<5;++digit)
        {
            memset(c,0,sizeof(c));
            loop
            {
                arr[i].a=dig_radix(arr[i].b);
                c[arr[i].a]=c[arr[i].a]+1;
            }

            for(i=1;i<10;++i)
            c[i]=c[i]+c[i-1];

            for(i=n-1;i>=0;--i)
            {
                int t=c[arr[i].a];
                ans[t].b=arr[i].b;
                --c[arr[i].a];
            }

            loop
            arr[i].b=ans[i+1].b;
        }
        loop
        p("%d ",arr[i].b);

        p("\n\n");
    }
    return 0;
}

/*
10
1 3 2 4  6 5 7 8 9 10
10 1 2 3 4 5 6 7 8 9
*/
