#include <fstream>
#include <algorithm>
using namespace std;
bool cmp(int, int);
int main()
{
	ifstream f("prize.in");
	int n;
	f >> n;
	int p[n], i;
	for (i = 0; i < n; i++) f >> p[i];
	f.close();
	sort(p, p+n, cmp);
	int s = 0;
	for (i = 0; i < n-1; i++) s += p[i]-1;
	s += p[i];
	ofstream g("prize.out");
	g << s;
	g.close();
	return 0;
}
bool cmp(int a, int b)
{
	return a > b;
}
