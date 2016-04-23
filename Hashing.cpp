#include<cstdio>
#include<string.h>
#include<iostream>
#include<string>
using namespace std;
#define s scanf
#define p printf

int main()
{
    int arr[100],a,b,i,j,k,n;
    while(s("%d",&n)==1)
    {
        memset(arr,0,sizeof(arr));

        for(i=1;i<=n;++i)
        {
            s("%d",&a);
            arr[a]=1;
        }
        while(s("%d",&a)==1)
        {
            if(arr[a]==1)
            p("Yes.\n");
            else
            p("No.\n");
        }
        p("\n");
    }
    return 0;
}

