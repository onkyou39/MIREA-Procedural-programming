#include<iostream>
#include<set>
using namespace std;
long long pop(multiset<long long>& s)
{
	auto it = s.end();
	--it;
	int ans = *it;
	s.erase(it);
	return ans;
}
int main()
{
	long long n, k;
	cin >> n >> k;
	multiset<long long> s;
	s.insert(n);
	long long ans1, ans2;
	for (long long i = 0; i < k; ++i)
	{
		n = pop(s);
		ans1 = (n - 1) / 2;
		ans2 = n - 1 - ans1;
		s.insert(ans1);
		s.insert(ans2);
	}
	cout << ans1 << endl;
	cout << ans2 << endl;
	system("pause");
}
