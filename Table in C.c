#include<stdio.h>
int main(){
	int a,i=1;
	scanf("%d",&a);
	while(i<=10){
		printf("%d * %d = %d\n",a,i,a*i);
		i=i+1;
	}
	
}



//int main(){
//	int n;
//	for(n=1;n<=20;n=n+2){
//		printf("%d\n",n);
//	}
//}


//int main(){
//	int a=5,i,mul=1;
//	for(i=1;i<=5;i=i+1){
//		mul*=i;
//	}
//	printf("%d",mul);
//}



//void main(){
//	int n,i,mul=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i=i+1){
//		mul+=i;
//	}
//	printf("%d",mul);
//}



//void main(){
//	int n=20,i,sum=0;
//	scanf("%d",&n);
//	for(i=2;i<=20;i=i+2){
//		sum+=i;
//	}
//	printf("%d",sum);
//}


//int main(){
//	int n,i,sum=0;
//	scanf("%d",&n);
//	for(i=1;i<n;i=i+1){
//		if(n%i==0){
//			sum=sum+i;
//		}
//	}
//	if(sum==n){
//		printf("perfect number");
//	}
//	else{
//		printf("not perfect number");
//	}
//}
