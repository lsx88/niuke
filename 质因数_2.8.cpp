/*
 *  作者：吕青松
 *  日期：2018.2.8
 *  题目链接：https://www.nowcoder.net/practice/20426b85f7fc4ba8b0844cc04807fbd9
 */

/*
 *  这道题完成的不错，不过仍然有几句冗余代码，再接再厉！
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (~scanf("%d", &n)) {
        int cnt = 0;
        for (int i = 2; i * i <= n; i ++) {
            while (n % i == 0) {
                n /= i;
                cnt ++;
            }
        }
        if (n != 1) cnt ++;
        printf("%d\n", cnt);
    }
    return 0;
}
