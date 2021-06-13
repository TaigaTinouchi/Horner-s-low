# include <stdint.h>

double calc(double x,double a[],int i,int n){
  if (i==0){
    return a[n];
  }else{
    return calc(x,a,i-1,n)*x+a[n-1];
  }
}

int main(void){
  int n,i;
  double element,x;
  printf("Enter n:");scanf("%d",&n);
  double array[n];
  for (i = 0; i < n; i++) {
    printf("Enter coefficient of %d(a_%d):",i,i);scanf("%lf",&element);
    array[i] = element;
  }
  printf("Enter concrete x:");scanf("%lf",&x);
  printf("%lf\n",calc(x,array,n,n));
  return 0;
}
