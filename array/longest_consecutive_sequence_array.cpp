#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={3,10,20,2,50,1,90,0,80};
    int n=sizeof(a)/sizeof(a[0]);
    int number=0;
    int longest_subsequence=0;
    map<int,int > m;

    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(m.find(a[i]-1) !=m.end())
        {      number=a[i];
   
                while(m.find(number)!=m.end())
                {
                    number++;
                }
                // cout<<"value of number after while"<<number;
                if(longest_subsequence<number-a[i])
                {
                    
                    longest_subsequence=number-a[i]+1;
                }
                
        }
         
    }

     
    cout<<endl<<longest_subsequence;

    return 0;
}