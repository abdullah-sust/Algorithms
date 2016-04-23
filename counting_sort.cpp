#include<cstdio>
#include<cstring>
using namespace std;
#define p printf
#define s scanf
int main()
{
    int a,n,i;
    int arr[100],t[100],result[100];
    p("\nThis program is not allowed for negative number.\n");
    p("\nEnter number of data: ");
    while(s("%d",&a)==1)
    {
        p("\nEnter data below:\n");
        for(i=1;i<=a;++i)
        s("%d",&arr[i]);
        p("\nEnter max number in data: ");
        s("%d",&n);
        memset(t,0,sizeof(t));

        for(i=1;i<=a;++i)
        t[arr[i]]=t[arr[i]]+1;

        for(i=1;i<=n;++i)
        t[i]=t[i]+t[i-1];

        for(i=1;i<=a;++i)
        {
            result[t[arr[i]]]=arr[i];
            t[arr[i]]=t[arr[i]]-1;
        }

        p("\nThe sorted output is given below:\n");
        for(i=1;i<=a;++i)
        p("%d ",result[i]);

        p("\n\n");
        p("\nEnter number of data: ");
    }
    return 0;
}
