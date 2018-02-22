/*
 *  作者：吕青松
 *  日期：2018.2.22
 *  题目链接：https://www.nowcoder.com/practice/376537f4609a49d296901db5139639ec 
 */

/*
 *  思路：动态规划
 *  dp[i][j]表示整数i拆分2的幂，最小的数字是2^j的方案数
 *  目标就是求Sigma(dp[n][i])
 *  初始化：if (i是2的幂) dp[i][log2(i)] = 1
 *  递推方程：dp[i][j] = Sigma(dp[i-2^j][k]) (k>=j)
 */

/*
 *  虽然动态规划的思路比递归的复杂度要低，但是还是会超时（空间好像也占用较多）。
 *  因此想到用这个方法在本地打印结果看一下，找找规律。
 *  打印了前20项的结果：
 *  1 2 2 4 4 6 6 10 10 14 14 20 20 26 26 36 36 46 46 60
 *  奇数项：1 2 4 6 10 14 20 26 36 46 60...间隔分别为1 2 2 4 4 6 6 10 10 14... 居然是数列本身！
 *  那么规律就出来了，设结果数列是f(n)，那么这个数列根据上面的观察有两条性质：
 *  (1) f(2n+1) = f(2n)
 *  (2) f(2n+1) - f(2n-1) = f(n) 
 *  根据这两条性质，可以轻易地递推出来结果了。 
 */
 
/*
 *  启示：遇到问题想办法解决，尽量先不要查网上的内容，哪怕手算一下前10几项还是没问题的
 *  或者用暴力的办法（递归、动态规划等）求出前几项，找找规律说不定结果就出来了。 
 *  网上那种给出结论然后证明的方式是非常不靠谱的，再遇到新的题目还是不会。 
 */

#include<cstdio>
#include<cstring>
using namespace std;

const int md = 1000000000;
/*

// 动态规划的代码 

const int maxn = 1000001;

int dp[maxn][20];

int main()
{
	for (int i=0; i<20; i++) dp[1<<i][i] = 1;
	for (int i=2; i<maxn; i++) {
		for (int j=19; j>=0; j--) {
			if ((1<<j)>=i) continue;
			int sigma = 0;
			for (int k=j; k<20; k++) {
				sigma = (sigma + dp[i-(1<<j)][k]) % md;
			}
			dp[i][j] = sigma;
		}
	}
	for (int n=1; n<=20; n++) {
		int ans = 0;
		for (int i=0; i<20; i++) ans = (ans + dp[n][i]) % md;
		printf("%d ", ans);
	}
	return 0;
}
*/

int f[1000005];

int main()
{
	f[1] = 1;
	for (int i=3; i<=1000001; i+=2) {
		int n = i/2;
		f[i] = (f[n*2-1] + f[n]) % md;
		f[i-1] = f[i];
	}
	int n;
	scanf("%d", &n);
	printf("%d", f[n]);
	return 0;
}
