int main(){
#ifdef LocalHost
    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
#endif
 
 
    int TC;
    cin>>TC;
    REP(tc,TC){
        scanf("%d %d",&n,&m);
        REP(i,2) scanf("%d %d",x+i,y+i);
        if(x[0]>x[1]) swap(x[0],x[1]);
        if(y[0]>y[1]) swap(y[0],y[1]);
 
        int dx = x[1]-x[0];
        int dy = y[1]-y[0];
 
        y[0] = m - dy;
        x[0] = n - dx;
        ll res = ll(x[0])*y[0]*2;
        if(x[0]*2 > n && y[0]*2 >m)
            res-= ll(x[0]*2-n)*(y[0]*2-m);
        cout<<ll(n)*m-res<<endl;
    }
 
    return 0;
}