vector<vector<ll>>edges;
vector<bool>visited;
vector<ll>component;

void dfs(ll node,ll parent,ll count){
    if(visited[node] == true) return;
    visited[node]=true;
    component[node] = count;
    for(auto i : edges[node]){
        if(i != parent) dfs(i,node,count);
    }
}
