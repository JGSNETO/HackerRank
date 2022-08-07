#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int tmp1, tmp2, max;
    if(a > b){
      tmp1 =a;  
      //printf("%d", a);
    }else{
      tmp1 = b;
    }
    if(c>d){
      tmp2 = c;    
    }else{
      tmp2 =d;
    }
    
    if( tmp1 > tmp2){
        max=tmp1;
    }else{
        max = tmp2;
    }
    
    return max;
};
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
