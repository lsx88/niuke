/*
 *  作者：吕青松
 *  日期：2018.2.8
 *  题目链接：https://www.nowcoder.net/practice/d0e751eac618463bb6ac447369e4aa25
 */

/*
 *  除了时间复杂度的优化，还可以进行空间复杂度的优化，没有必要开数组即可递推
 */

#include<bits/stdc++.h>
using namespace std;

const int md = 10000;

int main()
{
    int a0, a1, p, q, k;
    cin >>a0 >>a1 >>p >>q >>k;
    int a2;
    for (int i = 0; i < k; i ++) {
        a2 = (p * a1 + q * a0) % md;
        a0 = a1;
        a1 = a2;
    }
    cout <<a0;
    return 0;
}
