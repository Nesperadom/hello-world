#include "stdio.h"
int prime(int n){//�ж�����,��������0,���򷵻�1
 int i;
 if(n>2 && !(n&1) || n<2)
  return 1;
 for(i=3;i*i<=n;i+=2)
  if(!(n%i))
   return 1;
 return 0;
}
int main(int argc,char *argv[]){
 int n,i,t,a[10000]={0},sum,average,k=0;
 for(i=100;i<=10000;i++){
  for(t=i;t;t/=10)//�ӵ�λɾ��0λ,1λ...ֱ��ֻʣ1λ����������Ϊ��������
   if(prime(t))
    break;
  if(!t)
    
    printf("%d ",i);
     a[i]=i;
   k++;
 }
 printf("\n");
 for(i=100;i<=10000;i++)
 {
 	  sum+=a[i];	
 }
 average=sum/k;
 printf("average is %d",average);
 return 0;
}
