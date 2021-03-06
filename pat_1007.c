/*
1007. 素数对猜想 (20)
让我们定义 dn 为：dn = pn+1 - pn，其中 pi 是第i个素数。
显然有 d1=1 且对于n>1有 dn 是偶数。
“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。 
现给定任意正整数N (< 105)，请计算不超过N的满足猜想的素数对的个数。
输入格式：每个测试输入包含1个测试用例，给出正整数N。
输出格式：每个测试用例的输出占一行，
不超过N的满足猜想的素数对的个数。
输入样例：
20
输出样例：
4
2.3.5.7.11.13.17.19.23.29.31.37.41.43.47.53.59.61.67.71.73.79.83.89.97.
101.103.107.109.113.131.137.139.147.149.151.157.163.167.173.179.181.191.193.197.199.
211.223.227.229.233.239.241.251.257.263.269.271.277.281.283.293.
307.311.313.317
*/

#include<stdio.h>
#include<math.h>
int prime(int n){
	int i=1,j=2;
	if(n==2){
		return n;
	}
	for(i;i*i<=n;i++);
	for(j=2;j<=i;j++){
		if(n%j==0){
			return 0;
		}
	}
	if(j-1==i||n==2){
		return n;
	}
	else {
		return 0;
	}
}
int main(){
	int n,i=0,min=1,max=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(max=prime(i)){
			if(max-min==2){
			
				sum++;
			}
			min=max;
		}
	}
	
	printf("%d",sum);
	return 0;
}
