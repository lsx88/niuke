/*
 *  作者：吕青松
 *  日期：2018.2.26
 *  题目链接：https://www.nowcoder.com/practice/9324a1458c564c4b9c4bfc3867a2aa66 
 */

/*
 *  这种公式题一定不要妄想可以算出结论再证明，要么猜结论，要么打表找规律。
 *  稍微分析一下就知道，结果肯定是在0到k-1之间的，我原本猜想是输出x^y %k，结果输出了一下不太对。 
 *  于是开始打表。k不就是15种情况吗，挨个看。
 *  k=2的时候，一输出，怎么全是1。 
 *  k=3的时候，输出的全是1和2。 
 *  k=4的时候，输出的都是1,2,3。
 *  ……
 *  于是猜想，输出x^y % (k-1)。发现跟结果还是有差异，把0替换成k-1就结束了。 
 *  此题完。 
 */

/*  k=4的时候，每一行分别是x=1, x=2... 
	1 1 1 1 1 1 1 1 1 1
	2 1 2 1 2 1 2 1 2 1
	3 3 3 3 3 3 3 3 3 3
	1 1 1 1 1 1 1 1 1 1
	2 1 2 1 2 1 2 1 2 1
	3 3 3 3 3 3 3 3 3 3
	1 1 1 1 1 1 1 1 1 1
	2 1 2 1 2 1 2 1 2 1
	3 3 3 3 3 3 3 3 3 3
	1 1 1 1 1 1 1 1 1 1
*/

#include<bits/stdc++.h>
using namespace std;

long long md;
long long fp(long long a, long long k)
{
	long long res = 1;
	a %= md;
	while(k)
	{
		if (k&1) res = res * a % md;
		a = a * a % md;
		k >>= 1;
	}
	return res;
}

int main()
{
	long long x, y, k;
	while (cin >>x >>y >>k) {
		md = k - 1;
		long long res = fp(x, y);
		cout << ((res==0ll)?md:res) <<endl;
	}
	return 0;
}
