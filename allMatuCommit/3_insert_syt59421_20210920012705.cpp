#include<cstdio>
#include<cstring>
void insert(char *s1,char *s2,int n){
	if(s1 == 0 || s2 == 0|| n < 0){
		printf("error");
		return;
	}
//	int len1 = strlen(s1);
	int len1 = 0;
	while(s1[len1] != ' '){
		len1++;
	}
	if(n > len1){
		printf("error");
		return;
	}
	int len2 = strlen(s2);
//	int len2 = 0;
//	while(s2[len2] != ' '){
//		len2++;
//	}
	for(int i = len1;i >= n;i --){
		s1[i+len2] = s1[i];
	}
	for(int i = n;i <= n+len2;i ++){
		s1[i] = s2[i-n];
	}
	return;
}