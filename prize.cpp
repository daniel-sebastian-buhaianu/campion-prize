#include <fstream>
using namespace std;
int main()
{
	ifstream f("prize.in");
	int n;
	f >> n;
	long long s = 0;
	for (int i = 0; i < n; i++)
	{
		long long x;
		f >> x;
		s += x;
	}
	f.close();
	ofstream g("prize.out");
	g << s-n+1;
	g.close();
	return 0;
}
