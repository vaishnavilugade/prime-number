#include <stdio.h>

void prime(int num){
  int count=0;
  for(int i=2;i<num;i++){
    if(num%i==0){
      count++;
  break;
      }
    }
  if(count==0){
    printf("Prime");
  }
  else{
    printf("Not Prime");
  }
}

int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  if(n>0){
    prime(n);
  }
  else{
    printf("negative number.");
}

return 0;
}