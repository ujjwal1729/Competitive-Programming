//doing dfs and counting total number of components in a graph.
// also assigning the numbers to different components.
//CSES : building roads

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
 
int main(){
    ll n,e;
    cin >> n >> e;
    edges.assign(n+1,vector<ll>());
    component.assign(n+1,0);
    visited.assign(n+1,false);
    ll count=0;

    fr(1,e+1,i){
        ll a,b;
        cin >> a >> b;
        edges[a].pb(b);
        edges[b].pb(a);
    }

    fr(1,n+1,i){
        if(visited[i] == false) {
            count++;
            dfs(i,0,count);
        }
    }   
