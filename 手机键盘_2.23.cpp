/*
 *  ���ߣ�������
 *  ���ڣ�2018.2.23
 *  ��Ŀ���ӣ�https://www.nowcoder.com/practice/20082c12f1ec43b29cd27c805cd476cd 
 */

/*
 *  ģ��
 *  ֻ��Ҫ�õ�ÿ����ĸ���ĸ�������Ҫ�����Σ�������漴�ɡ� 
 */

#include<cstdio>
#include<cstring>
using namespace std;

int J[26];
int C[26];
int now = 0;
int nowj = 2;

void build(int x)
{
	for (int j=0; j<x; j++) {
		J[now] = nowj;
		C[now] = j + 1;
		now++;
	}
	nowj++;
}

int main()
{
	for (int i=0; i<5; i++) build(3);
	build(4);
	build(3);
	build(4);
	/*
	for (int i=0; i<26; i++) printf("%d ", J[i]);
	printf("\n");
	for (int i=0; i<26; i++) printf("%d ", C[i]);
	printf("\n");
	*/
	char s[105];
	while (~scanf("%s", s)) {
		int l = strlen(s);
		int ans = C[s[0]-'a'];
		for (int i=1; i<l; i++) {
			if (J[s[i]-'a']==J[s[i-1]-'a']) ans += 2 + C[s[i]-'a'];
			else ans += C[s[i]-'a'];
		}
		printf("%d\n", ans);
	}
	return 0;
}
