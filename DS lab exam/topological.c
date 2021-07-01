#include<stdio.h>
int main(){
int i,j,k,n,a[10][10],index[10],flag[10],count=0;
printf("Enter number of vertices:");
scanf("%d",&n);
printf("\t\t___Enter the adjacency matrix___");
for(i=0;i<n;i++){
		printf("\nEnter row %d:\n",i+1);
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}

	for(i=0;i<n;i++){
        index[i]=0;
        flag[i]=0;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            index[i]=index[i]+a[j][i];
 
    printf("\nThe topological order is:");
 
    while(count<n){
        for(k=0;k<n;k++){
            if((index[k]==0) && (flag[k]==0)){
                printf("%d ",(k+1));
                flag [k]=1;
            }
 
            for(i=0;i<n;i++){
                if(a[i][k]==1)
                    index[k]--;
            }
        }
 
        count++;
    }
 
    return 0;
}