#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int b,n,p,q,i,j,t;
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d %d",&n,&p,&q);
        int a[n+1];
        for (i=1; i<=n; i++) scanf("%d",a[i]);
        int y=floor(q/64)+2;
        int b[y+1],x=0,l[q+1],r[q+1],z;
        for (i=0; i<q; i++) {
            if (i/64==0) {
                z=i/64;
                l[i]=(b[z+x])%n;
                z++;
                r[i]=(b[z+x])%n;
            }
            else {
                l[i]=(l[i-1]+x)%n;
                r[i]=(r[i-1]+x)%n;
                if (l[i]>r[i]) swap(l[i],r[i]);
            }
            int ans=0;
            for(j=l[i]; j<r[i]; j++) {
                ans*=a[i];
                ans%=p;
            }
            x=(ans+1)%p;
        }
        printf("%d\n",x);
    }
}
