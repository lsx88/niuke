/*
 *  作者：吕青松
 *  日期：2018.2.7
 *  题目链接：https://www.nowcoder.net/practice/04c8a5ea209d41798d23b59f053fa4d6
 */

/*
 *  求解约数的个数最直接的办法就是for一遍，复杂度O(根号n)
 *  也可以通过预处理质因数，通过质因数分解得到约数个数，复杂度O(根号n以内的质数个数 + log(根号n))
 *  具体参照https://baike.baidu.com/item/约数个数定理/4926961
 */


#include<bits/stdc++.h>
using namespace std;

const int maxn = 32000;
int cnt = 0;
int pri[maxn];

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i ++) {
        if (x % i == 0) return false;
    }
    return true;
}

void getPrime()  // 预处理质因数，这里为了方便好理解直接用了复杂度O(n*sqrt(n))的算法，也有O(n)的算法，可以百度线性筛法。
{
    for (int i = 2; i <= maxn; i ++) {
        if (isPrime(i)) {
            pri[cnt++] = i;
        }
    }
}

int getAns(int x)
{
    int ans = 1;
    for (int i = 0; i < cnt; i ++) {
        int th = 0;
        while (x % pri[i] == 0) {
            th ++;
            x /= pri[i];
        }
        ans *= (th + 1);
    }
    if (x != 1) ans *= 2;  // 之所以可以只处理根号n以内的质数，就是因为大于根号n的质因数至多有一个，所以加上这一句就解决了
    return ans;
}

int main()
{
    getPrime();
    int n;
    while (~scanf("%d", &n)) {
        for (int i = 0; i < n; i ++) {
            int x;
            scanf("%d", &x);
            printf("%d\n", getAns(x));
        }
    }
    return 0;
}
