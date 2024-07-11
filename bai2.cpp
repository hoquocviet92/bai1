#include <stdio.h>
void nhap(int a[],int n){
   printf("nhap vao n \n");
   for (int i= 0; i < n ; i++){
      scanf("%d\n", &a[i]);
   }
}
int main(){
   int a[10],n;
   scanf("%d",&n);
   nhap(a,n);
   for (int i = 0; i < n ; i ++){
      printf("%d",a[2]);
      break;
   }

