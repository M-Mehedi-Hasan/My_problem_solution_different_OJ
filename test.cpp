#include <bits/stdc++.h>
using namespace std;
int a[]={1,2,2,2,3,3,3,4};
int main()
{
    int l=0,r=7,tar=3;
    int ans=8;

    while (l<=r)
    {
      int mid=(l+r)/2;
      if(a[mid]<=tar){
           l=mid+1;
      }else{
          ans=min(ans,mid);
          r=mid-1;
      }
    }
    
    cout<<ans<<endl;
}