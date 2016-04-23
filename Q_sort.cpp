//Qsort
#include <cstdio>
#include <utility>
#include <iostream>
using namespace std;
#define s scanf
#define p printf
#define loop for(i=0;i<n;++i)
int arr[100];
void q(int from ,  int to)
{
    if(from<to)
    {
        int pivot=arr[from];
        int i=from;
        for(int j=from+1;j<=to;++j)
        if(pivot>arr[j])
            swap(arr[++i],arr[j]);
        swap(arr[i],arr[from]);

        q(from,i-1);
        q(i+1,to);
    }
}
int main()
{
    int n,i;
    while (s("%d",&n)==1)
    {
        loop
        s("%d",&arr[i]);
        q(0,n-1);
        loop
        p("%d ",arr[i]);
    }
    return 0;
}
