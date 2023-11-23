#include<stdio.h>
#include<conio.h>
void main(){
float unit,sum,ans,bil;
clrscr();
printf("Enter your usable unite : ");
scanf("%f",&unit);

if(unit<=50){
	 sum=unit*0.50;
	 }else if(unit<=150){
			 sum=(unit-50)*0.75+25;
			 }else if(unit<=250){
					 sum=(unit-150)*1.20+100;
					 }else{
					      sum=(unit-250)*1.50+225;
					      }
ans=sum*0.2;
printf("Total payble bil in %f: ",sum+ans);

getch();
}