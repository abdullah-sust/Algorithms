#include<cstdio>
#include<utility>
using namespace std;
#define p printf
#define s scanf
int main()
{
    int arr[100],result[100];
    int i,k,j,n;
    p("Complexity is: n(n+1)/2==O(n^2)\n");
    p("\nIf input data is sorted than this will perform nicely.\n");
    p("And then complexity stands for O(n).\n\n");
    p("\nEnter number of data below:\n");
    while(s("%d",&n)==1)
    {
        p("\nEnter the data set below:\n");
        for(i=0;i<n;++i)
        s("%d",&arr[i]);
        //result[0]=arr[0];
        for(i=1;i<n;++i)
        for(j=i;j>0;--j)
        if(arr[j]<arr[j-1])
        swap(arr[j],arr[j-1]);
        p("Sorted data is given below:\n");
        for(i=0;i<n;++i)
        p("%d ",arr[i]);

        p("\nEnter the data set below:\n");
    }
    return 0;
}
