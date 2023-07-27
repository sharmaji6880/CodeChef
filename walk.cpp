#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    vector<int> w(n);
	    for(int i=0;i<n;i++) {
	        cin>>w[i];
	    }
	    if(n==1) {
	        cout<<w[0]<<endl;
	        continue;
	    }
	    int v=w[0];
	    int ans=v;
	    v-=1;
	    for(int i=1;i<n;i++) {
	        if(v<w[i]) {
	            ans+=w[i]-v;
	            v=ans-i-1;
	            continue;
	        }
	        v--;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
