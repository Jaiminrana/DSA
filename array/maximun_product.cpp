#include<bits/stdc++.h>

using namespace std;

int main(){

    int a[]={6,-3,-10,0,2};
    int n=sizeof(a)/sizeof(a[0]);
    int product=a[0],minimum=a[0],maximum=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]<0)
            swap(minimum,maximum);//very imp condition if current elemet is -3 and minimum is -40 and 
            //maximum is -10 then after multiplication minimum will be 120 and maximum will be 30 so we need to 
            //swap there value first so we get maximum value
        
        minimum=min(a[i],minimum*a[i]);
        maximum=max(a[i],maximum*a[i]);

        if(product<maximum)
            product=maximum;
        
    }

    cout<<"maximum subarray product is:---"<<product;

    return 0;
}