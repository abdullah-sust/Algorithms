//Activity Selection.......
#include<cstdio>
using namespace std;
#define s scanf
#define p printf
typedef struct
{
    int start,end,tag;
}
activity;
activity list[100],temp;
int main ()
{
    int n,data[100],i,j,count;
    //activity temp;
    while(s("%d",&n)==1)
    {
        for(i=1;i<=n;++i)
        {
            s("%d %d",&list[i].start,&list[i].end);
            list[i].tag=0;
        }
        for(i=1;i<n;++i)
        for(j=i+1;j<=n;++j)
        if(list[i].end>list[j].end)
        {
            temp =list[i];
            list[i]=list[j];
            list[j]=temp;
        }
        count=1;
        int index;
        list[1].tag=1;
        index=1;

        for(i=2;i<=n;++i)
        if(list[i].start>=list[index].end)
        {
            index=i;
            ++count;
            list[i].tag=1;
        }
        p("Total activity is: %d\n",count);
        for(i=1;i<=n;++i)
        if(list[i].tag==1)
            p("%d %d\n",list[i].start,list[i].end);
        p("\n\n");
    }
    return 0;
}
/*
Input:
11
0 6
1 4
2 13
3 5
3 8
5 7
5 9
6 10
8 11
8 12
12 14
Output:
Total activity is: 4
1 4
5 7
8 11
12 14
*/
