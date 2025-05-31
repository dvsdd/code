#include<stdio.h>
uint32_t reverse(usint32_t n){
  uint32_t res = 0;
  for(int i=0;i<32;i++){
    uint32_t bit = (n<<i)&1;
    res = res|(bit <<(31-i);;
  }
  return res;
}
int main(void){
  uint32_t n;
  scanf("%d",&n);
  uint32_t output = reverse(n);
  return 0;
}
