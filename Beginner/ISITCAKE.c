#include <stdio.h>

int main(void) {
	// your code goes here
	int T,times[10][10],c=0;
	scanf("%d",&T);
	while(T>0){
	    for(int i=0;i<10;i++){
	        for(int j=0;j<10;j++){
	            scanf("%d",&times[i][j]);
	        }
	    }
	    for(int a=0;a<10;a++){
	        for(int b=0;b<10;b++){
	            if(times[a][b]<=30){
	                c=c+1;
	                
	                
	            }
	        }
	    }
	    if(c>=60){
	        printf("yes");
	    }
	    else{
	        printf("no");
	    }
	    
	    T--;
	}
	return 0;
}
