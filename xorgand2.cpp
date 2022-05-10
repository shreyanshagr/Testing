#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t-->0)
	{
		int n=0;
		cin>>n;
		int dp[n+1][33];

            for(int i=1;i<=n;i++){
                int temp =0;
                cin>>temp;
                for(int j=0;j<33;j++){
                    dp[i][j] = dp[i-1][j];
                }
                int pwr = 32;
                if(temp!=0) pwr = (int)(log(temp)/log(2));
                dp[i][pwr] ++;
                
            }
            int q=0;
            cin>>q;
            for(int i =0;i<q;i++){
                
                int si=0;
                int ei = 0;
                int x =0;
                int cnt =0;
                cin>>si>>ei>>x;
                
                int pwr = 32;
                if(x!=0)
                	pwr = (int)(log(x)/log(2));
                cnt = dp[ei][pwr]-dp[si-1][pwr];
                
                
                int ans =(ei-si+1)-cnt;
                
                cout<<ans<<endl;
            }
      
	
	}
	return 0;

}