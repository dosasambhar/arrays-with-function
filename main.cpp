#include <iostream>
using namespace std;
void functionarry(int arr[], int size){
  for (int i=0; i<=size-1; i++){
    cout<<arr[i]<<endl;
}
}

void inc(int arr[], int size){
  arr[0]=arr[0]+10;
   cout<<arr[0]<<endl;
}
  
int main() {
  int a[10]={1,2,3,4,5,6,7,8,9,0};
  functionarry(a,10);
  inc(a,3);

  int b[4]={0,4,8,5};
  functionarry(b,3);
}