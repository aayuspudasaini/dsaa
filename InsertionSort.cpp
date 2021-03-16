#include <stdio.h> 
#include<stdlib.h> 


void Insertion(int A[],int n) 
{    
	int i,j,x;        
	for(i=1;i<n;i++)    
	{       
		 j=i-1;        
		 x=A[i];        
		 while(j>-1 && A[j]>x)        
		 {            
			 A[j+1]=A[j];            
			 j--;        
		 }        
		 A[j+1]=x;    
	 } 
 }
int main() 
{   
	int A[]={11,13,8,12,16,9,24,5,10,3},n=10,i;
	printf("The given input are:");
	for(i=0;i<10;i++)
	printf("\n%d",A[i]);         
	Insertion(A,n);  
	printf("\n\nThe output is:");      
	for(i=0;i<10;i++)        
		printf("%d ",A[i]);    
	printf("\n");
	return 0; 
}
