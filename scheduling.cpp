#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[100];//机器
int x1[100];//作业
int maxnum=1000000;

void task(int level)
{
    if(level>n){
     int temp=0;
     for(int i=1;i<=k;i++){
        if(x[i]>temp){
            temp=x[i];
        }
     }
     if(temp<maxnum){
        maxnum=temp;
     }
    }
    else{
        for(int i=1;i<=k;i++){
           // cout<<x[i]<<endl;
            x[i]+=x1[level];
          //  cout<<x[i]<<endl;
            task(level+1);
            x[i]-=x1[level];
        }
    }
}
int main()
{
   // cout<<x[0]<<endl;
    //cin >> n;
    n=7;
   // cin >> k;
   k=3;
    for(int i=1;i<=n;i++){
        cin >>x1[i];
    }
    task(1);
    cout << maxnum;
    return 0;
}

/* 2 14 4 16 6 5 3 */
