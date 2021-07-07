#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={0,0,0,0,2,2,3,5,4,1,2,2,3,6,5,0,0,0,};

    int n=v.size();
    int key=0;
    map<int,int> map;

    for(int i=0;i<n;i++)
    {   
        map[v[i]]++;
    }

    for(auto x=map.begin();x!=map.end();x++)
    {
            if(x->first==key)
            {
                cout<<x->second;
            }
    }


    return 0;
}