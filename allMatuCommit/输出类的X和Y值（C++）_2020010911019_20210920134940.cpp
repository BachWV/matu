class Location{
    private :
	int X,Y;
	public:
	void init(int initX,int initY){
	     X = initX;
		 Y = initY;
	}
	int GetX(){
	    return X;
	}
	int GetY(){
	    return Y;
	}
};
int main(){
     Location A1;
	 A1.init(20,90);
	 Location &rA1=A1;       //??????????A1??????rA1;
	 printf("%d %d",rA1.GetX(),rA1.GetY());      //??rA1??????????????????A1????????X??Y???;
     return 0;	 
}