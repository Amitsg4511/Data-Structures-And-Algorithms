#include <bits/stdc++.h>
 using namespace std;

 void sortData(int arr[],int size){
   for(int i=0;i<size; i++){
    for(int j=i+1;j<size;j++){
       if(arr[i]>arr[j]){
        swap(arr[i],arr[j]);
     }
    }
   }
}

int main(){
   int arr[10] = {5,2,1,44,52,23,12,634,4,5};
   sortData(arr,10);
   int first = arr[0];
   int last = arr[9];
   int target = 5;
   for(int i=0;i<10; i++){
    int mid = (first + last) / 2;
    if(mid == target){
        cout << mid;
        break;
    }
    else if(mid>target){
        last = mid;
    }
    else{
        first = mid;
    }
   }
   cout << "Not found";
}

