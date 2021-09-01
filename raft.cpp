#include <bits/stdc++.h>

using  namespace  std;
int raft(int arr[], int n, int k){
    int capasity[k] = {0};
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        capasity[0]+=arr[i];
        sort(capasity,capasity+k);
        for(int j=0;j<k;j++){
            cout<<capasity[j]<<" ";
        }
        cout<<endl;
    }
    return capasity[k-1];

}/*
int raft(int arr[], int n, int k){
    int capasity[k] = {0};

    sort(arr,arr+n);

    for(int i=k-1;i>=0;i--){
        capasity[i]+=arr[n-i-1];
    }

    for(int i=n-k-1;i>=0;i--){
        bool hasAdded = false;
        cout<<arr[i]<<":";
        for(int j=1;j<=k-1;j++){

          if(capasity[0]>=arr[i]+capasity[j]){

            capasity[j]+=arr[i];
            hasAdded = true;
            break;
          }
        }
        if(!hasAdded)capasity[0]+=arr[i];
        for(int p=0;p<k;p++){
            cout<<capasity[p]<<" ";
        }cout<<endl;
    }
    return capasity[k-1];

}*/
int main()
{
    int n,k;
    int arr[500];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<raft(arr,n,k);


return 0;

}
/*
6 2
26 7 10 30 5 4
*/
