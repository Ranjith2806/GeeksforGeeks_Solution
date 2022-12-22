

pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxi=0,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=max(a[i],maxi);
        mini=min(a[i],mini); 
    }
    pair<long long,long long>pr;
    pr.first=mini;
    pr.second=maxi;
    return pr;
    
    
}
