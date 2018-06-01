#include<stdio.h>

struct queue{
    int front,rear;
    int emArr[50],arr[50];
}q1,q2;

void insertArr(){
    printf("Enter time : ");
    scanf("%d",&q1.arr[q1.rear++]);
}

void insertEmArr(){
    printf("Enter time : ");
    scanf("%d",&q2.emArr[q2.rear++]);
}

void sortArr(){
    int i,j;
    for(i = q1.front;i<q1.rear-1;i++){
        for(j = i + 1;j<q1.rear;j++){
            if(q1.arr[j] < q1.arr[i]){
                int temp = q1.arr[j];
                q1.arr[j] = q1.arr[i];
                q1.arr[i] = temp;
            }
        }
    }
    for(i = q2.front;i<q2.rear-1;i++){
        for(j = i + 1;j<q2.rear;j++){
            if(q2.emArr[j] < q2.emArr[i]){
                int temp = q2.emArr[j];
                q2.emArr[j] = q2.emArr[i];
                q2.emArr[i] = temp;
            }
        }
    }
}

void main(){
	int i,j,n,m,k=0;
    int wait[50],patient[50];
	q1.front = q2.front = q1.rear = q2.rear = 0;

	printf("Enter number of emergency patients : ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		insertEmArr();
	}

	printf("Enter number of regular patients : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		insertArr();
	}
    sortArr();
    if (q2.rear > 0){
		for(j=0;j<m;j++){
            patient[k++] = q2.emArr[j];
			printf("Emergency patients : %d\n",q2.emArr[j]);
		}
	}
	for(j=0;j<n;j++){
        patient[k++] = q1.arr[j];
		printf("Regular patients : %d\n",q1.arr[j]);
	}
	for(i=1;i<n+m;i++)
    {
        wait[i]=0;
        for(j=0;j<i;j++)
            wait[i]+=patient[j];
    }

       int sum = 0;
       wait[0] = 0;
       for(j=1;j<n+m;j++){
            sum += wait[j];
    }

    printf("Average waiting time : %d",sum/(m+n));
}
