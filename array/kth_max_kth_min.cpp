//https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/#:~:text=Methods%20of%20priority%20queue%20are%3A%201%20priority_queue%3A%3Aempty%20%28%29,most%20element%20of%20the%20queue%20More%20items...%20
#include <iostream>
#include <queue>
#include<map>
using namespace std;

int main()
{
    int a[]={5,3,1,8,9,4,7};
    int b[]={5,3,1,8,9,4,7};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int ans,anss;
    cout<<"size of array:-"<<n<<endl;
    cout<<"find the kth smallest and largest element:-"<<endl;
    int k;//largest,smallest;
    cin>>k;
// priority_queue<int,vector<int>,greater<int>> p;//min heap created
   
//     for(int i=0;i<n;i++){
//         p.push(a[i]);
//     }

  

//     int counter=0;
//     while(counter!=k)
//     {
//         counter++;
//         ans=p.top();
//         p.pop();
       
//     }
//   cout<<endl<<k<<"th smallest element in heap:-"<<ans; 

 priority_queue<int,vector<int> > maxheap;//max heap created

     for(int i=0;i<m;i++){
        maxheap.push(b[i]);
    }
    int counters=0;
    while(counters!=k)
    {
        anss=maxheap.top();
        maxheap.pop();
        counters++;
        
       
       
    }
    cout<<endl<<k<<"th largest element in heap :-"<<anss;

        // int n=6;
        // int k=2;

        // vector<int> v={10000,5,0,3,4,99};
        // map<int,int> m;
        // for(int i=0;i<v.size();i++)
        // {
        //     m[v[i]]++;
        // }
        // int count=0;
        // for(auto it:m)
        // {
        //     count+=it.second;
        //     if(count>=k)
        //     {
        //         cout<<k<<"th smallest number is:-"<<it.first<<endl;
        //         break;
        //     }
        // }

        // //for largest number
        // int backcounter=0;
        // for(auto it=m.rbegin();it!=m.rend();it++)
        // {
             
        //     //  cout<<it->first<<"  "<<it->second<<endl;
        //         backcounter+=it->second;
        //         if(backcounter>=k)
        //         {
        //             cout<<endl<<k<<"th largest number is:-"<<it->first<<endl<<" ."<<endl;
                    

        //             break;
        //         }
        // }
       
         




    return 0;
}