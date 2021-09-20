#include<stdio.h>
int main(){
	char s[51];
	gets_s(s);
	int i;
	for(i=0;s[i]!='\0';i++){
		if('a'<=s[i]&&s[i]<='z'||'A'<=s[i]&&s[i]<='Z'||'0'<=s[i]&&s[i]<='9')
			printf("%c",s[i]);
		else if(s[i+1]!=s[i]){
			printf("%c",s[i]);
		}
	}
	return 0;
}