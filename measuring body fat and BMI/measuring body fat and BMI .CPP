#include<iostream>
using namespace std;
int  main()
{
	int sex,ages;
	double weight,height,body_fat,BMI;
	
	cout<<"請輸入你的身高(採公尺制):"<<endl;
	cin>>height;
	 if(height>=1.7)
	 {
		cout<<"你好高喔"<<endl; 
	 }
	 else
	 {
		cout<<"多喝牛奶喔"<<endl; 
	 }
	
	cout<<"請輸入你的體重(採公斤制):"<<endl;
	cin>>weight;
	
	BMI= weight / ( height * height );
	cout<<"你的BMI為"<<BMI<<endl;
	 if(BMI<18.5)
	 {
	 	cout<<"你太輕了!"<<endl; 
	 }
	 else if(BMI>24)
	 {
	 	cout<<"該減肥囉"<<endl; 
	 }
	 else
	 {
	 	cout<<"很好!你棒棒!"<<endl; 
	 }
	
	cout<<"請輸入你的性別(男為1/女為0):"<<endl;
	cin>>sex;
     
	cout<<"請輸入你的年齡:"<<endl;
	cin>>ages;
	
	body_fat=(BMI*1.2)+(ages*0.23)-5.4-(sex*10.8);
	cout<<"你的體脂肪為:"<<body_fat<<endl;
	 
	return 0; 
}
