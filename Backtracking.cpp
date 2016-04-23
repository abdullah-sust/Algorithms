//backtracking 10776
#include<cstdio>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<vector>
#include<iostream>
using namespace std;
#define s scanf
#define p printf
int j,m,n;
char arr[100];
bool taken[100];
vector <char> result;

void call (void)
{
    int i;
    if(result.size()==m)
    {
        for(i=0;i<m;++i)
        cout<<result[i];
        cout<<endl;
    }
    else
    {
        for(i=0;i<n;++i)
        {
            if(!result.empty()&&result[result.size()-1]>arr[i])
            continue;
            if(taken[i]==0)
            {
                taken[i]=1;
                result.push_back(arr[i]);
                call();
                taken[i]=0;
                result.pop_back();
                while(arr[i]==arr[i+1])
                ++i;
            }
        }
    }
}

int main()
{
    while(s("%s %d",arr,&m)==2)
    {
        n=strlen(arr);
        sort(arr,arr+n);
        call();
        memset(arr,0,sizeof(arr));
        memset(taken,0,sizeof(taken));
        result.clear();
    }
    return 0;
}
/*
abcde 2
abcd 3
aba 2
*/
