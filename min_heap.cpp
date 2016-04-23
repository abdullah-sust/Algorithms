//this is min_heap && output print in increasing order
//works for both positive & negative number
#include<cstdio>
#include<utility>
#include<iostream>
using namespace std;
#define s scanf
#define p printf
int arr[10000],ans[10000];

void insert_heap(int x)
{

    while(arr[x]<arr[x/2])
    {
        swap(arr[x],arr[x/2]);
        x/=2;
    }
}
void build_heap(int x)
{
    int y=2,z=3,pos=1;
    if(x>=z)
    {
        int mini_=min(arr[y],arr[z]);
        while(arr[pos]>mini_)
        {
            if(arr[z]>arr[y])
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
            if(x>=z)
            mini_=min(arr[y],arr[z]);
            else if(y==x)
            {
                if(arr[pos]>arr[y])
                swap(arr[pos],arr[y]);
                return;
            }
            else
            return;
        }

    }
    else if(x==y)
    {
        if(arr[y]<arr[pos])
        swap(arr[y],arr[pos]);
        return;
    }
    else
    return;
}
int main()
{
    int n,i,j;
    arr[0]=-10000000;
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
            build_heap(j);
        }
        for(i=1;i<=n;++i)
        p(" %d ",ans[i]);
        p("\n");
    }
    return 0;
}
/*
9
-1 -2 -3 -4 -5 -6 -7 -8 -9
 -9  -8  -7  -6  -5  -4  -3  -1  -2
*/
