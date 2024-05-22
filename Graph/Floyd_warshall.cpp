// To find min distance betweeen all pairs of vertices
// CSES : Shortest Routes 2
// O(n^3)

vector<vector<pair<ll,ll>>>edges;
ll n,e,q;
vector<vector<ll>>shortest_path;
 
void floyd_Warshal(){
    shortest_path.assign(n+1,vector<ll>(n+1,INF));
    fr(1,n+1,i) shortest_path[i][i]=0;

    for (int i = 1; i < n+1; i++) {
		for (auto j : edges[i]) {
			shortest_path[i][j.ff] = min(shortest_path[i][j.ff], j.ss);
		}
	}

    fr(1,n+1,i){
        fr(1,n+1,j){
            fr(1,n+1,k){
                shortest_path[j][k]= min(shortest_path[j][k],shortest_path[j][i]+shortest_path[i][k]);
            }
        }
    }
}
