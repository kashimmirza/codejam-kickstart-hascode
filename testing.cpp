#include<bits/stdc++.h>
using namespace std;
int a[101];





int main(){
int n;
int t;
cin>>t;
for(int c=1;c<=t;c++){
cin>>n;
 a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int sum=0;
int mid=0;
for(int i=0;i<n-1;i++){
        mid=i;
        for(int j=i;j<n;j++){
            if(a[mid]>a[j]){
                mid=j;
            }
        }
        sum+=mid-i+1;
        reverse(a+i, a+mid+1);
}






    //sum+=index+1-i+1-1;

cout<<"Case #"<<c<<": "<<sum<<endl;
}
}





