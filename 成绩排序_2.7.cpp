/*
 *  注释是一门艺术
 *  作者: 吕青松
 *  日期: 2018.2.7
 *  题目链接：https://www.nowcoder.net/practice/0383714a1bb749499050d2e0610418b1
 */

/*
 *  首先，要理解排序的本质是什么，就是把数据按序进行排列。
 *  什么是序？离散数学学过，序是一种关系。所以说只要定义好了关系，任何排序算法都可以完成排序，冒泡当然也可以。
 *  其次，冒泡和插入排序并不是平时常用的，因为时间复杂度是n^2，如果数据有100000以上，1s之内是无法解决问题的。
 *  常用的方法是快排，但是快排不需要手写，直接调用C++的库就可以了，要做的只不过是要定义一下你的序是什么。详见代码。
 */

#include<bits/stdc++.h>
using namespace std;

struct Student {
    int val;
    int id;
    string name;
} stu[1000];

bool cmp0(const Student & s1, const Student & s2) {
    return s1.val > s2.val || s1.val == s2.val && s1.id < s2.id;
}

bool cmp1(const Student & s1, const Student & s2) {
    return s1.val < s2.val || s1.val == s2.val && s1.id < s2.id;
}

int main()
{
    int n, ty;
    while (cin >> n >> ty) {
        for (int i = 0; i < n; i ++) {
            cin >> stu[i].name >> stu[i].val;
            stu[i].id = i;
        }
        if (ty == 0) sort(stu, stu + n, cmp0);
        else sort(stu, stu + n, cmp1);
        for (int i = 0; i < n; i ++) {
            cout << stu[i].name << " " << stu[i].val << endl;
        }
    }
    return 0;
}
