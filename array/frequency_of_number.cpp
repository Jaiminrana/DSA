#include<bits/stdc++.h>
using namespace std;

// void find_frequency(int a[],int n){

//     map<int, int> mp;

//     for(int j=0;j<n;j++)
//     {
//         mp[a[j]]++;
//     }

//     cout<<"frequency of elements are as follows:"<<endl;
//      for(auto x:mp)
//     {

//         cout<<x.first<<" "<<x.second<<endl;
//     }


// }

void  find_frequency_using_2array(int a[], int n){

    vector<bool> visited_index(n,false);

    for(int i=0;i<n;i++)
    {
        if( visited_index[i]==true)
            continue;

        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                visited_index[j]=true;
                count++;
            }
        }
        cout<<a[i]<<" "<<count<<endl;
    }




}
int main(){

    int n;
    cout<<"Enter the size of array:-";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //find_frequency_using_map(arr,n);

    find_frequency_using_2array(arr,n);

    return 0;
}