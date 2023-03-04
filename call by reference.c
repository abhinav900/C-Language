#include<stdio.h>
//int greater(int *a,int *b,int *c);
//int main(){
//	int a1,b1,c1;
//	printf("Enter the numbers:");
//	scanf("%d %d %d",&a1,&b1,&c1);
//	int c=greater(&a1,&b1,&c1);
//	printf("%d",c);
//}
//int greater(int *a,int *b,int *c){
//	if(*a>*b && *a>*c){
//		return *a;
//}
//	else if(*b>*a && *b>*c){
//		return *b;
//	}
//	else if(*c>*a && *c>*b){
//		return *c;
//	}
//}





//                user defined function swap two numbers by using call by reference

//int swap(int *a,int *b);
//int main(){
//	int a1,b1;
//	scanf("%d %d",&a1,&b1);
//	swap(&a1,&b1);
//}
//int swap(int *a,int *b){
//	int temp;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//	printf("%d %d",*a,*b);
//}



//       write user defined function to return the factorial of a number by call by reference method?
//int factorial(int *a);
//int main(){
//	int a1;
//	printf("Enter the value");
//	scanf("%d",&a1);
//	printf("%d",factorial(&a));	
//}
//int factorial(int *a){
//	int i,mul=1;
//	for(i=1;i<=*a;i++){
//		mul*=1;
//	}
//	return mul;
//}



//          Recursion
//int main(){
//	int m=5;
//	printf("%d",fact(m));
//}
//int fact(int n){
//	if(n==0){
//		return 1;
//	}
//	else{
//		return n* fact(n-1);
//	}
//}




//            write the recursion function print the sum of n natural numbers
//int main(){
//	int a;
//	printf("Enter the numbers:");
//	scanf("%d",&a);
//	printf("%d",sum(a));
//}
//int sum(int n){
//	if(n==1){
//		return 1;
//	}
//	else{
//		return n + sum(n-1);
//	}
//}




//        recursion for reverse the number?

int reve(int n);
int rev=0;
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d", reve(a));
}
int reve(int n){
	int d;
	if(n!=0){
		d=n%10;
		rev=rev*10+d;
		return reve(n/10);
	}
	else{
		return rev;
	}
}


