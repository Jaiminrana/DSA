//we have to use linkedhashmap here but in c++ there is no such concept of linkedhashmap so we have 
//solved it using bruteforce
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={1,3,6,6,2,1};
    
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        int j;
        for( j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
               
                break;//same element is found so break and then i++
            }
        }
        if(j==n)//if j reaches to n so no repeating/same element is found 
        {
            cout<<"non repeating element:-"<<a[i];
            break;
        }
    }   




    // unordered_map<int,int> m;

    // for(int i=0;i<n;i++){
    //     m[a[i]]++;
    // }
    // cout<<"hi\n";
    // for(auto x:m)
    // {
    //     cout<<x.first<<"->"<<x.second<<endl;
    // }
    // for(auto it=m.begin();it!=m.end();it++)
    // {
    //         if(it->second=1)
    //         {
    //             cout<<it->first;
    //             break;
    //         }
    // }

return 0;}