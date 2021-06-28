#include <stdio.h>
#include <string.h>

void swap_max(int arr[], int l, int n)
{ int t=0;
  int p=0;
  int c=arr[n];
      for (int i=n;i<l;i++){ 
       if(arr[i]>c){
         c=arr[i];
     }
      else{
      continue;
     }
  }
     for (int i=n;i<l;i++){
     if(arr[i]==c){
        p=i;
        }
      else{
      continue;
      }
     }
   t=arr[n];
   arr[n]=c;
   arr[p]=t;
   }
   
  void ssort(int arr[], int l){
  for(int i=0;i<l;i++){
  swap_max(arr, l, i);
  }
  }
