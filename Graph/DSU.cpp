struct UnionFind {
	int n;
	vector<int> parent;      
	vector<int> rank;

	UnionFind(int n) {
		rank.resize(n);
		parent.resize(n);
		fill(rank.begin(), rank.end(), 0);
		for (int i = 0; i < n; i++) parent[i] = i;
	}

	int get(int a) {return parent[a] = (parent[a] == a ? a : get(parent[a]));}
		
	void merge(int a, int b) {
		a = get(a);
		b = get(b);
		if (a == b) return;
		if (rank[a] == rank[b]) rank[a]++;
		if (rank[a] > rank[b]) parent[b] = a;
        else parent[a] = b;
	}
};
