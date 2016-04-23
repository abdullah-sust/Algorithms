//min-heap
#include <cstdio>
#include <utility>
#include <iostream>
using namespace std;

int arr[100010], ans[100010];

void ins_heap(int x)
{
    while(arr[x] < arr[x / 2])
    {
        swap(arr[x], arr[x / 2]);
        x = x / 2;
    }
}

void delheap(int x)
{
    int y, z, min_, pos, temp;
    pos = 1;
    y = 2;
    z = 3;
    if(z <= x)
    {
        min_ = min(arr[y], arr[z]);
        while(min_ < arr[pos])
        {
            if(arr[y] < arr[z])
            {
                swap(arr[pos], arr[y]);
                pos = y;
            }

            else
            {
                swap(arr[pos], arr[z]);
                pos = z;
            }

            y = 2 * pos;
            z = 2 * pos + 1;

            if(z <= x)
                min_ = min(arr[y], arr[z]);

            else if(y == x)
            {
                if(arr[y] < arr[pos])
                    swap(arr[pos], arr[y]);
                return;
            }

            else
                return;
        }
    }

    else if(y == x)
    {
        if(arr[y] < arr[pos])
            swap(arr[pos], arr[y]);
    }
}

int main()
{
    int n, i, j;
    arr[0] = -1000000000;
    while(scanf("%d", &n) == 1)
    {
        for(i = 1; i <= n; ++i)
        {
            scanf("%d", &arr[i]);
            ins_heap(i);
        }
        //printf("\n\n");

        j = n;
        for(i = 1; i <= n; ++i)
        {
            ans[i] = arr[1];
            arr[1] = arr[j];
            --j;
            delheap(j);
        }

        printf("\nSorted List:");
        for(i = 1; i <= n; ++i)
            printf(" %d", ans[i]);
        printf("\n");
    }
    return 0;
}
