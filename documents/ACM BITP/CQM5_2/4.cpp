
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long t;
cin>>t;

while(t--){
        long long n;
cin>>n;
    vector< pair <long long ,long long > > vect;
        vector <long long > ans(n);
        int mi[n];
        for(int i=0;i<n;i++){mi[i]=1;}
    for(int i=0;i<n;i++){long long a,b;
        cin>>a>>b;
        vect.push_back( make_pair(a,b) );}
 sort(vect.begin(), vect.end());
 int height[n];
 for(int i=0;i<n;i++){vect[i].first>vect[j].first && height[i]=vect[i].second;}
        for (int i = 0; i < n; i++ ){ans[i] = height[i];}

 long long max=0;
for (int i=1;i<n;i++){ for(int j=0;j<i;j++) {

			    if ( height[i]>height[j] && ans[i] < ans[j] +height[i] ){
                ans[i] = ans[j] + height[i];}
		}
	}
	for (int i=0;i<n;i++){if(max<ans[i])max = ans[i];}
	cout<< max<<endl;
}

return 0;}

