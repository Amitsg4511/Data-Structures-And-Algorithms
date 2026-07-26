#include <bits/stdc++.h>
 using namespace std;


int main(){
   int arr[10] = {5,2,1,44,52,23,12,634,4,5};
   for(int i=0;i<10; i++){
    for(int j=i+1;j<10;j++){
       if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
     }
    }
    cout<<arr[i] << " ";
   }
}