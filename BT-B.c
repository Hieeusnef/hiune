#include<stdio.h>
#define MAX 100000

void nhap( long a[], int n){
	for(int i=0;i<n;i++)
	scanf("%ld",&a[i]);
}
void solon(long  a[], int n){
	int m=a[0];
	
	for(int i=1;i<n;i++){
		if(m <a[i]){
			m=a[i];
		}
	}
  int b=0;
	for(int j=0;j<n;j++){
		if (a[j]==m){
			b++;
		} 
	}
printf("%d %d",m,b); 
}

int main(){
	int n;
	long a[100000];
	scanf("%d",&n);
	nhap(a,n);
	
	solon(a,n);
return 0;  
}