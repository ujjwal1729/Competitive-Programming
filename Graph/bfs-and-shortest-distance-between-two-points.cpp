//bfs and to find the shortest distance as well as the path between two nodes
// cses : message route

vector<ll>ans;
vector<vector<ll>>edges;
vector<bool>visited;
queue<ll>q;

vector<ll>previous;
ll countans=0;

 
void shortest_distance(ll start,ll finish){
    ll curr = finish;
    while(curr!=start){
        countans++;
        ans.pb(curr);
        curr = previous[curr];
    }
    countans++;
    ans.pb(start);
}

void bfs(ll node){
    if(!q.empty()) q.pop();
    for(auto it:edges[node]){
        if(visited[it] == false){
            q.push(it);
            previous[it]=node;
            visited[it] = true;
        }
    }
    if(!q.empty()) bfs(q.front());
}
 
int main(){
    ll n,e;
    cin >> n >> e;
    edges.assign(n+1,vector<ll>());
    previous.assign(n+1,0);
    visited.assign(n+1,false);

    fr(0,e,i){
        ll a,b;
        cin >> a >> b;
        edges[a].pb(b);
        edges[b].pb(a);
    }
    
    visited[1] = true;
    bfs(1);
    if(previous[n] == 0) cout << "IMPOSSIBLE" << endl;
    else shortest_distance(1,n);          
}
