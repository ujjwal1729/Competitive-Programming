vector<vector<ll>> mat_mul(vector<vector<ll>>a,vector<vector<ll>>b){
    ll r1 = a.size();
    ll c1 = a[0].size();
    ll r2 = b.size();
    ll c2 = b[0].size();
    vector<vector<ll>>prod(r1,vector<ll>(c2));
    fr(0,r1,i){
        fr(0,c2,j){
            fr(0,c1,k){
                prod[i][j] += (a[i][k] * b[k][j]) % MOD;
                prod[i][j] %= MOD;
            }
        }
    }
    return prod;
}

vector<vector<ll>> matexp(vector<vector<ll>>a, ll n){
    vector<vector<ll>> out(a.size(), vector<ll>(a.size(),0));
    fr(0,a.size(),i) out[i][i] = 1;
    if(n == 0) return out;
    out = matexp(a, n/2);
    out = mat_mul(out, out);
    if(n % 2) out = mat_mul(out, a);
    return out;
}
