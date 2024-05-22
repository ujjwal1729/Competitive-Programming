//shortest path, single source
// cses : shortest routes1
//O(VlogV + ElogV)

ll n,e;
vector<vector<pair<ll,ll>>>edges;
vector<ll>dist;
vector<ll>parent;

void dijkstra(int s){
    parent.assign(n+1,-1);
    dist.assign(n+1,INF);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    q.push({0, s});
    dist[s] = 0;
    while (!q.empty()) {
        ll d_v = q.top().first;
        ll v = q.top().second;
        q.pop();
        if (d_v != dist[v]) continue;
        for (auto edge : edges[v]) {
            int len = edge.second;
            int to = edge.first;
            if ((dist[v] + len) < dist[to]) {
                dist[to] = dist[v] + len;
                parent[to] = v;
                q.push({dist[to], to});
            }
        }
    }
}
