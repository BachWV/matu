
#include<iostream>
#include<string.h>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<cstring>
#include<string>
#include<bitset>
#include<numeric>
#include<utility>
using namespace std;

typedef class bignum {
#define MAXLEN 5000
	public:
		char val[MAXLEN];
		char tmp[MAXLEN];
		int len;
		bool priv;
		bool cmp(const bignum &b) { //a<b->1 ; else 0
			if(priv<b.priv) return 1;
			else if(priv>b.priv) return 0;
			else if(priv==1) {
				int ans=abs_cmp(b);
				if(ans>0) return 1;
				else return 0;
			} else {
				int ans=abs_cmp(b);
				if(ans<0) return 1;
				else return 0;
			}
		}

		void add(const bignum &b) {
			if(priv==b.priv) abs_add(b);
			else {
				int ck=abs_cmp(b);
				if(ck>0) {
					priv=b.priv;
					abs_sub2(b);
				} else {
					abs_sub1(b);
				}
			}
		}

		void sub(const bignum &b) {
			if(priv!=b.priv) abs_add(b);
			else {
				int ck=abs_cmp(b);
				if(ck>0) {
					priv^=1;
					abs_sub2(b);
				} else {
					abs_sub1(b);
				}
			}
		}

		void receive() {
			scanf("%s",tmp);
			len=strlen(tmp);
			memset(val,0,sizeof(val));
			for(int i=MAXLEN-1,j=len-1 ; j>=0 ; i--,j--) {
				val[i]=tmp[j]-'0';
			}
			priv=1;
		}
		bignum() {
			memset(val,0,sizeof(val));
			len=0;
			priv=1;
		}


	private:

		void abs_add(const bignum &b) {
			int mxlen=max(len,b.len);
			int cur=MAXLEN-1,end=MAXLEN-mxlen-1;
			char f=0;
			while(cur>=end) {
				val[cur]+=b.val[cur]+f;
				f=0;
				if(val[cur]>9) {
					val[cur]-=10;
					f=1;
				}
				cur--;
			}
			while(!val[cur]&&cur<MAXLEN) cur++;
			len=MAXLEN-cur;
		}

		int abs_cmp(const bignum &b) { //|a|<|b|->1 ; |a|=|b|->0 ; |a|>|b|-> -1
			if(len<b.len) return 1;
			else if(len>b.len) return -1;
			else {
				int cur=MAXLEN-len;
				while(cur<=MAXLEN-1) {
					if(val[cur]<b.val[cur]) return 1;
					else if(val[cur]>b.val[cur]) return -1;
					cur++;
				}
			}
			return 0;
		}

		void abs_sub1(const bignum &b) { //|a|>=|b|&&|a|-=|b|
			int mxlen=b.len;
			int cur=MAXLEN-1,end=MAXLEN-mxlen;
			char f=0;
			while(f||cur>=end) {
				if(val[cur]>=f+b.val[cur]) {
					val[cur]-=f+b.val[cur];
					f=0;
				} else {
					val[cur]+=10-f-b.val[cur];
					f=1;
				}
				cur--;
			}
			cur=MAXLEN-len;
			while(!val[cur]&&cur<MAXLEN) cur++;
			len=MAXLEN-cur;
		}

		void abs_sub2(const bignum &b) { //|a|<=|b|&&|a|=|b|-|a|
			int mxlen=len;
			int cur=MAXLEN-1,end=MAXLEN-mxlen;
			char f=0;
			while(f||cur>=end) {
				if(b.val[cur]>=f+val[cur]) {
					val[cur]=b.val[cur]-f-val[cur];
					f=0;
				} else {
					val[cur]=10+b.val[cur]-f-val[cur];
					f=1;
				}
				cur--;
			}
			end=MAXLEN-b.len-1;
			while(cur>=end) {
				val[cur]=b.val[cur];
				cur--;
			}
			while(!val[cur]&&cur<MAXLEN) cur++;
			len=MAXLEN-cur;
		}
} bignum;

bignum a,b;
int main() {
	a.receive();
	b.receive();
	a.sub(b);
	if(!a.len) printf("0");
	else {
		if(a.priv) printf("+");
		else printf("-");
		for(int i=MAXLEN-a.len; i<MAXLEN; i++) {
			printf("%d",a.val[i]);
		}
	}
	printf("\n");
//	a.add(b);
//	if(!a.len) printf("0");
//	else {
//		if(a.priv) printf("+");
//		else printf("-");
//		for(int i=MAXLEN-a.len; i<MAXLEN; i++) {
//			printf("%d",a.val[i]);
//		}
//	}
//	printf("\n");
}