// Multiset koshan
// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	multiset<long long> str;
	for (int i = 0; i < N; i++) {
		long long candy_ct;
		cin >> candy_ct;
		str.insert(candy_ct);
	}

	int total_candies = 0;

	for (int i = 0; i < K; i++) {
		auto last_it = --str.end(); // yha -- islie kia h takki iterator last elment ko point kare nahi to last ke next pe point krega
		long long t_candy_count = *last_it;
		total_candies += t_candy_count;
		str.erase(last_it);
		str.insert(t_candy_count/2);
	}

	cout << total_candies << endl;

}