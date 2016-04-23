#include<cstdio>
#include<cmath>
using namespace std;
#define s scanf
#define p printf
int main()
{
    int a,x,n,i,ans,m,power,z;
    while(s("%d %d",&x,&n)==2)
    {
        m=n;
        power=1;
        z=x;
        i=0;
        while(m>0)
        {
            while(m%2==0)
            {
                m/=2;
                z=z*z;
            }
            m=m-1;
            power=power*z;
        }
        p("%d\n\n",power);
    }
    return 0;
}
