//merge_sort
#include <cstdio>
#include <utility>
#include <iostream>
using namespace std;
#define s scanf
#define p printf
#define INF 1<<30
int arr[100],Left[100],Right[100];
void mergesort(int p,int q,int r)
{
    int i,j,k,index=0;

    for(i=p;i<=r;++i)
            Left[++index]=arr[i];

        Left[++index]=INF;
        index=0;
    for(j=r+1;j<=q;++j)
        Right[++index]=arr[j];
        Right[++index]=INF;
    i=j=1;
    for(k=p;k<=q;++k)
    {
        if(Left[i]<Right[j])
        {
            arr[k]=Left[i];
            ++i;
        }
        else
        {
            arr[k]=Right[j];
            ++j;
        }
    }
    return ;
}
void merge(int p, int q)
{
    if(p<q)
    {
        int r=(p+q)/2;
        merge(p,r);
        merge(r+1,q);
        mergesort(p,q,r);
    }
}
int main()
{
    int n,i;
    while(s("%d",&n)==1)
    {
        for(i=0;i<n;++i)
        s("%d",&arr[i]);
        merge(0,n-1);
        for(i=0;i<n;++i)
        p("%d ",arr[i]);
    }
    return 0;
}
