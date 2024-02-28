#include <stdio.h>

int main(){
	int a[2][2], b[2][2], mul[2][2];
	int i, j;
	
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter the value for matrix a%d%d:  ",i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
		
		printf("n");
		
			for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter the value for matrix b%d%d:  ",i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}


//multiplication	

	for(i=0;i<2;i++){
			int k=0;
		for(j=0;j<2;j++){
		
		mul[i][j]= a[i][j]*b[i][k]+a[i][k]*b[1+i][k+1];
		k++;
		}

}

for(i=0;i<2;i++)    
{    
for(j=0;j<2;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  

