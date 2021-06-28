 #include<stdio.h>
int main()
{
	int marks[4][3],max,i,j;
	printf("Enter marks of four students in three subjects\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++){
		printf("enter the marks of student %d and sub %d :\t",i+1,j+1);
		scanf("%d",&marks[i][j]);
	}
	}
	for(j=0;j<3;j++)
	{
		max=marks[0][j];
		for(i=1;i<4;i++)
		{
			if(max<marks[i][j])
			{
				max=marks[i][j];
			}
		}
		printf("highest marks in each subject %d = %d \n",j+1,max);
	}
	return 0;
}
