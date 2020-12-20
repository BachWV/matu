/*（多态）Set类（C++）
通过课程进入	题 号:	165	（多态）Set类（C++）	语言要求：	C++
引入头文件CSet.h,它的内容如下：*/
#include <iostream>
using namespace std;
class Set{
private:
	int n;
	int * pS; //集合元素
public:
	Set(){n = 0;pS =NULL;}
	Set(Set &s){
		n = s.n;
		if (n !=0)
		{
			pS= new  int[n+1];
			for (int i =1;i<=n;i++) //集合的下标从1开始，集合中不能有重复元素
				pS[i] = s.pS[i];
		}
	}
	~Set(){
		if (pS)
		{
			delete []pS;
			pS = NULL;
			n =0;
		}
	}
		void ShowElement()const{ //输出集合的元素
		int temp = 0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(pS[i] > pS[j])
				{
					temp = pS[i];
					pS[i] = pS[j];
					pS[j] = temp;
				}
			}
		}
		cout<<"{";
		for(int i =1;i<n;i++)
			cout <<pS[i]<<",";
		if (IsEmpty())
			cout<<"}"<<endl;
		else cout<<pS[n]<<"}"<<endl;
	}
	bool IsEmpty()const{return n?false:true;} //判断集合是否为空
	int size(){return n;}
	bool IsElement(int e)const {
		for (int i =1;i<=n;i++)
			if (pS[i] ==e)
			return true;
		return  false;
	}
	bool operator <=(const Set &s)const;//this <= s判断当前集合是否包于集合s
	bool operator ==(const Set &s)const; //判断集合是否相等
	Set & operator +=(int e);    // 向集合中增减元素e
	Set & operator -=(int e);    //删除集合中的元素e

	Set operator |(const Set &s)const;  //集合并
	Set operator &(const Set &s)const;//集合交
	Set operator -(const Set &s)const; //集合差
};
Set & Set::operator+=(int e) {/*
if(IsEmpty()==true){
    pS=new int(2);
    pS[0]=-1111;
    pS[1]=e;
    n=1;
}else {
    n++;//n=3
    int *c1 = new int(n + 1);
    *c1=-111;
    for (int i = 1; i < n ; i++) {
        c1[i] = pS[i];
    }
    c1[n]= e;
    delete[]pS;
    pS = c1;
}
    return *this;*/
    if(!this->IsElement(e))
    {
        Set set;
        set.n = n + 1;
        set.pS = new int[n+1];
        for(int i = 1;i<n+1;i++)
        {
            set.pS[i] = pS[i];
        };
        set.pS[set.n] = e;

        delete []this->pS;
        pS = NULL;
        n++;
        pS = new int[set.n+1];
        for(int i=1;i<set.n+1;i++)
        {
            pS[i] = set.pS[i];
        }
    }
    return *this;
}
Set & Set::operator-=(int e) {/*
if(IsElement(e)==true){
    n--;//n=2 to n=1
    int *c1=new int(n+1);//new 2
    int *c2=c1;
    int *c3=pS;
    int j=1;
    c1[0]=-1111;
    for(int i=1;i<n+2;i++){
        if(e!=c3[i]){
            c1[j]=c3[i];
            j++;
        }
    }

    pS=c1;}

    return *this;*/
    Set set(*this);
    if(set.IsElement(e)) {
        delete []pS;
        pS = nullptr;
        pS = new int[n];
        for (int i = 1, j = 1; i <= n + 1; ++i)
        {
            if (set.pS[i] != e)
            {
                pS[j++] = set.pS[i];//
            }
        }
        --n;

    }
    return *this;

}
bool Set::operator<=(const Set &s) const {
    for(int i=0;i<this->n;i++){
        if(s.IsElement(pS[i+1])== false){
            return false;
        }
    }
    return true;
}
bool Set::operator==(const Set &s) const {
    if(*this<=s&&s<=*this){
        return true;
    }else
    return false;

}
Set Set::operator|(const Set &s) const {
    Set s1;
    for(int i=1;i<=n;i++){
        s1+=pS[i];
    }
    for(int i=1;i<=s.n;i++){
        s1+=s.pS[i];
    }
    return s1;

}
Set Set::operator&(const Set &s) const {
    Set s1;

    for(int i=1;i<=n;i++){
            if(s.IsElement(pS[i])){
                s1+=pS[i] ;
            }
        }
    for(int i=1;i<=s.n;i++){
        if((IsElement(s.pS[i])==true)&&(s1.IsElement(s.pS[i])== false)){
            s1+=s.pS[i];
        }}

    return s1;
}
Set Set::operator-(const Set &s) const {
    Set s1;
    s1.pS=new  int[n+1];
    for (int i =1;i<=n;i++){s1+= pS[i];} //集合的下标从1开始，集合中不能有重复元素
    for(int i=1;i<=n;i++){
        if(s.IsElement(pS[i])==true){
            s1-=pS[i];
        }
    }
    return s1;
}
int main(){
    Set s1,s2;
    s1+=1;s2+=2;s2+=1;
    (s1&s2).ShowElement() ;//{1}
}
/*
完成Set类，实现运算符的重载。
重载操作符+=,向集合中增减元素e,例如:
Set s;
s +=1;
s.ShowElement();//{1}

重载操作符-=,删除集合中元素e,例如:
Set s;
s +=1,s+=2;
s.ShowElement();//{1,2}
s -=1;
s.showElement();//{2}

重载操作符<=,判断当前集合是否包于另一个集合，例如:
Set s1,s2,s3;
s1 +=1; s2+=1;s2+=3; s3+=2;
s1 <=s2;//true
s3 <=s2//false;

重载操作符==,判断集合是否相等,例如:
Set s1 s2;
s1 == s2;//true
s1+=1;s2+=2;
s1 ==s2 ;//false;

重载操作符|,集合并,例如:
Set s1 s2;
s1+=1;s2+=2;
s1|s2 ;//{1,2}

重载操作符&,集合交,例如:
Set s1 s2;
s1+=1;s2+=2;s2+=1;
s1&s2 ;//{1}

重载操作符-,集合差,例如:
Set s1 s2;
s1+=1;s1+=3;s2+=2;s2+=1;
s1-s2 ;//{3}*/

