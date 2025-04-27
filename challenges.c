#include <stdio.h>

int main(){
      int x, y, sum;
      printf("please enter x value:");
      scanf("%d",&x);
      printf("please enter y value:");
      scanf("%d", &y);
      sum = x % y;
      printf("%d", sum);
}