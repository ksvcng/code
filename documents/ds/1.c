#include<stdio.h>
#include<conio.h>
//#include"C:\Users\KESHAV\Documents\ds\2.c"
//void main(){
int y=8;
void call(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
printf("n=%d ",n);
int sm=0;
for(i=0;i<n;i++){sm=sum(sm,arr[i]);}
//for(i=0;i<n;i++)
printf("\nsum =%d ",sm);}
//}
