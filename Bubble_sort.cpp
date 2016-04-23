#include<cstdio>
using namespace std;
#define p printf
#define s scanf
int main()
{
    int i,j,n,k,arr[100],t,a;
    p("Enter the num of data below:\n");
    while(s("%d",&n)==1)
    {
        for(i=0;i<n;++i)
        s("%d",&arr[i]);
        a=0;

        for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
        if(arr[i]>arr[j])
        {
            printf("%d %d\n",arr[i],arr[j]);
            ++a;
            t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
        }
        printf("\n%d\n",a);

        for(i=0;i<n;++i)
        p("%d ",arr[i]);
        p("\n\nEnter the num of data below:\n");
    }
    return 0;
}
