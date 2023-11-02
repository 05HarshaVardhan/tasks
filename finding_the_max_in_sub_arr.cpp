#include<bits/stdc++.h>
using namespace std;

void Takeinput()
{
	#ifndef a
	freopen("C:/prog files/input.txt","r",stdin);
	freopen("C:/prog files/output.txt","w",stdout);
	#endif
}

vector<int> findMax(vector<int>& v,int k)
{
    vector<int>ans;
    deque<int>dq;
    int len = v.size();
    for(int i=0;i<len;i++)
    {
        if(!dq.empty() && dq.front() == i-k)
        dq.pop_front();

        while(!dq.empty() && v[dq.back()] <= v[i])
        dq.pop_back();

        dq.push_back(i);
        if(i >= k-1)
        ans.push_back(v[dq.front()]);
    }
    return ans;
}

int main()
{
    Takeinput();
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    vector<int>result;
    result = findMax(vec,k);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    
}