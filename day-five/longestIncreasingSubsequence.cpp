#include <iostream>

using namespace std;

int max(int a, int b){
  return a>b ? a:b;
}

void printNumbers(int arr[],int temp[], int sum, int index, int prev){
  if(sum==0){
    cout<<endl;
    return;
  }
  int i;
  for(i=index; i >=0;i--){
    if(temp[i]==sum&& arr[i] < prev){
      break;
    }
  }
  printNumbers(arr,temp,sum-1,i - 1,temp[i]);
  cout<<temp[i]<<' ';
}

void longestIncreasingSubsequence(int arr[], int size){
  int *temp=new int[size];
  int *nArr=new int[size];

  for(int i=0;i<size;i++){
    temp[i]=1;
  }
  int i=0,k=0;
  int j=1;
  while(j<size){
    i=0;
    while(i<j){
      if(arr[i]<arr[j]){
        temp[j]= max(temp[j],temp[i]+1);
      }
      i++;
    }
    j++;
    // if(temp[j]<arr[i]){
    // nArr[k]=arr[i];
    // k++;
  // }
  }
  int max=temp[0];
  int maxIndex=0;
  for(i=1;i<size;i++){
    if(temp[i]>max){
      max=temp[i];
      maxIndex=i;
    }
  }
  int Xmax=max;
  for(int i=size;i>=0&&Xmax!=0;i--){
    if(temp[i]==Xmax){
      if(nArr[k-1]>arr[i]){
        nArr[k]=arr[i];
        k++;
        Xmax--;
      }
    }
  }
  printNumbers(arr,temp,max,size-1,100);
  // for(int i=0;i<max;i++){
  //   cout<<nArr[i]<<' ';
  // }
  delete [] nArr;
  delete [] temp;
  //return max;
}

int main(){
  int arr[8]={1,9,2,0,3,5,7,9};
  longestIncreasingSubsequence(arr, 8);
}
