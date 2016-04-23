#include<cstdio>
using namespace std;
#define s scanf
#define p printf
int main()
{
    int arr[100],i,j,n,min,posi;
    while(s("%d",&n)==1)
    {
        for(i=0;i<n;++i)
        s("%d",&arr[i]);

        for(i=0;i<n-1;++i)
        {
            min=1<<30;
            posi=0;
            for(j=i+1;j<n;++j)
            {
                if(arr[j]<min)
                {
                    min=arr[j];
                    posi=j;
                }
            }
            if(arr[i]>min)
            {
                arr[posi]=arr[i];
                arr[i]=min;
            }
        }

        for(i=0;i<n;++i)
        p("%d ",arr[i]);

        p("\n\n");

    }
    return 0;
}
