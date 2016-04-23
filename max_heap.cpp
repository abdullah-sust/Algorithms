//max_heap or sorted in decreasing order

#include<cstdio>
#include<utility>
#include<iostream>
using namespace std;
#define s scanf
#define p printf
int arr[10000],ans[10000];
void insert_heap(int x)
{
    while(arr[x]>arr[x/2])
    {
        swap(arr[x],arr[x/2]);
        x/=2;
    }
}
void build(int x)
{
    int pos=1,y=2,z=3,mm;

    if(z<=x)
    {
        mm=max(arr[y],arr[z]);
        while(mm>arr[pos])
        {
            if(arr[z]<arr[y])
            {
                swap(arr[pos],arr[y]);
                pos=y;
            }
            else
            {
                swap(arr[pos],arr[z]);
                pos=z;
            }
            y=pos*2;
            z=pos*2+1;
            if(z<=x)
            mm=max(arr[y],arr[z]);
            else if(y==x)
            {
                if(arr[pos]<arr[y])
                swap(arr[pos],arr[y]);
                return ;
            }
            else
            return ;
        }
    }
    else if(x==y)
    {
        if(arr[pos]<arr[y])
        swap(arr[pos],arr[y]);
    }
    else
    return ;
}

int main()
{
    int i,j,n;
    arr[0]=2140000000;
    while(s("%d",&n)==1)
    {
        for(i=1;i<=n;++i)
        {
            s("%d",&arr[i]);
            insert_heap(i);
        }
        j=n;
        for(i=1;i<=n;++i)
        {
            ans[i]=arr[1];
            arr[1]=arr[j];
            --j;
            build(j);
        }
        p("Sorted List is: ");
        for(i=1;i<=n;++i)
        {
            p(" %d",ans[i]);
        }
        p("\n\n");
    }
    return 0;
}
