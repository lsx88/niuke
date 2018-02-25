/*
 *  author: Qingsong Lv
 *  date: 2018.2.25
 *  link: https://www.nowcoder.com/practice/4b91205483694f449f94c179883c1fef
 */

/*
 *  静态指针也是指针，实际要知道的就是每个节点的左右孩子分别是谁
 */

#include<bits/stdc++.h>
using namespace std;

char s[105];
//int l[105], r[105];

pair<int, int> dfs(int u)  // 返回从s[u]开始的子树的根，和这个子树最右端到输入串的哪里
{
    if (s[u]=='#') return make_pair(-1, u);
    pair<int, int> left = dfs(u+1);
    printf("%c ", s[u]);  // 写完这个函数以后发现中序遍历直接在这里就可以做了，所以记录的l和r也就没有什么作用了。
    pair<int, int> right = dfs(left.second+1);
    //l[u] = left.first;
    //r[u] = right.first;
    return make_pair(u, right.second);
}

int main()
{
    while (~scanf("%s", s)) {
        dfs(0);
        printf("\n");
    }
    return 0;
}
