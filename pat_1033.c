/*
1033. 旧键盘打字(20)

旧键盘上坏了几个键，于是在敲一段文字的时候，
对应的字符就不会出现。现在给出应该输入的一段文字、
以及坏掉的那些键，打出的结果文字会是怎样？ 
输入格式： 
输入在2行中分别给出坏掉的那些键、以及应该输入的文字。
其中对应英文字母的坏键以大写给出；
每段文字是不超过105个字符的串。
可用的字符包括字母[a-z, A-Z]、数字0-9、以及下划线“_”
（代表空格）、“,”、“.”、“-”、“+”
（代表上档键）。题目保证第2行输入的文字串非空。 
注意：如果上档键坏掉了，那么大写的英文字母无法被打出。 
输出格式： 
在一行中输出能够被打出的结果文字。
如果没有一个字符能被打出，则输出空行。
输入样例：
7+IE.
7_This_is_a_test.
输出样例：
_hs_s_a_tst
*/
#include<stdio.h>
#include<string.h>

int main(){
    char ch='\0',a[100002],c[100002];
	int i=0,len_a=0,len_c=0,j=0;
	int mistake[210]={0};
	gets(a);
	gets(c);
	len_a=strlen(a);
	for(i=0;i<len_a;i++){
		mistake[a[i]]=1;
		if(a[i]>='A'&&ch<='Z'){
			mistake[a[i]+32]=1;
		}
	}
	
	len_c=strlen(c);
	for(i=0;i<len_c;i++){
		if(mistake[c[i]]!=1){
			if(c[i]>='A'&&c[i]<='Z'&&mistake['+']==1){
			
			}
			else{
				printf("%c",c[i]);
				j++;
			}
		}
	}
	if(!j){
		printf("\n");
	}
	return 0;
}
