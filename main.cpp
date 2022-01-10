///BIJON SAHA DURJOY
// SUST_SWE19
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,k;
     cin>>n;
     int ara[n];
     
     //inputing array
     for(i=0; i<n; i++)
     {
          cin>>ara[i];
     }
     int start= 0, end = n-1, mid;
     
     sort(ara, ara+n);
     for(i=0; i<n; i++)
     {
        cout<<ara[i]<<" ";  
     }
     printf("\n");
     cin>>k;
     while(start <= end)
     {
           mid=(start + end)/2;
           if(ara[mid] == k)
           {
                cout<<"Item found at: "<<mid<<endl;
                return 0;
           }
           else if(ara[mid] < k)
           {
                start = mid +1;  
           }
           else
           {
                end = mid-1;
           }
     }
     cout<<"Item not found"<<endl;
  return 0;
}