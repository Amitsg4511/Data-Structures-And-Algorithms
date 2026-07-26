#include <bits/stdc++.h>
 using namespace std;


int main(){
   int arr[10] = {5,2,1,44,52,23,12,634,4,5};
//    Starting from last because in every iteration the largest element will 
//    move to the last in ascending sorting
bool isSwap = false;
   for(int last=10-1;last>0;last--){
       for(int i=0;i<10;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            isSwap = true;
        }
       }
       if(!isSwap){
        break;
       }
   } 
   for(int i=0;i<10;i++){
    cout << " " << arr[i];
   }
}