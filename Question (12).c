#include<stdio.h> 
int main() 
{ 
     int n,i,c=0,ts=0,ws=0;
     int at[100],bt[100],p,m[100],wt[100],t[100],temp[100];
     int cm[100]={0};
     double v,vs;
     printf("Enter the total number of Process you want : ");
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
     {
     	printf(" Enter burst time for no. %d \n",i+1);
     	A:
     	printf(" Burst Time : ");
     	scanf("%d",&bt[i]);
     	if(bt[i]<0)
     	{
     		printf("Burst time cannot be negative! \n\n");
     		goto A;
		 }
        at[i]=0;
     	printf("\n");
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	temp[i]=bt[i];
	 }
	
	 for(i=0;i<n;i++)
     {
     	
	 if(bt[i]<=8)
     {
     	c=c+8;
     	cm[i]=c;
	 }
	 else
	 {
	 	bt[i]=bt[i]-8;
	 	c=c+8;
	 }
	 }
	 for(i=0;i<n;i++)
     {
     	
     if(cm[i]==0)
	 {
	 	
     if(bt[i]<=16)
     {
     	c=c+bt[i];
     	cm[i]=c;
	 }
	 
	 else
	 {
	 	bt[i]=bt[i]-16;
	 	c=c+16;
	 }
	 }
    }

	for(i=0;i<n;i++)
	{
		if(cm[i]==0)
		{
			c=c+bt[i];
			cm[i]=c;
		}
	}
	
     printf("\n The Completion time of each process is \n\n");
	 for(i=0;i<n;i++)
     {
     	printf("P[%d]: %d",i+1,cm[i]);
        printf("\n");
	 }
	 printf("\n The Turn Around time of each process is \n\n");
	for(i=0;i<n;i++)
     {
     	t[i]=cm[i]-at[i];
     	printf("P[%d]: %d\n",i+1,t[i]);
     	ts=ts+t[i];
	 }
	    v=ts/(float)n;
     	printf("The Average Turn around time is  %f: ",v);
     	printf("\n");
     	
	  printf("\n The Waiting Time of Each Process is \n\n");
	for(i=0;i<n;i++)
     {
     	wt[i]=t[i]-temp[i];
     	printf("P[%d]: %d\n",i+1,wt[i]);
     	ws=ws+wt[i];
	 }
	    vs=ws/(float)n;
     	printf("The Average Waiting time is %f: ",vs);
     	printf("\n");
}
