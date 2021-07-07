#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int value=1;
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<" "<<value;
            value=value*(i-k)/(k+1);

        }
        cout<<endl<<endl;
    }
    
    
    return 0;

}