#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;

const int maxn = 105;
int a[maxn][maxn];
int sum[maxn][maxn];
int dp[55][1555];
int ans;



int main() {
    int T;
    scanf("%d",&T);
    int kase = 0;
    while(T--) {
        int n,k,p;
        scanf("%d%d%d",&n,&k,&p);
        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= k;j++) {
                scanf("%d",&a[i][j]);
                sum[i][j] = sum[i][j - 1] + a[i][j];
            }
        }

        memset(dp,0,sizeof(dp));

        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= k;j++) {
                for(int q = j;q <= p;q++) {
                    dp[i][q] = max(dp[i][q],max(dp[i - 1][q],dp[i - 1][q - j] + sum[i][j]));
                }
            }
        }

        printf("Case #%d: ",++kase);
        printf("%d\n",dp[n][p]);
    }
    return 0;
}

