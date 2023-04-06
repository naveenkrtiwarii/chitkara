#include<stdio.h>

struct student
{
    char name[50];
    int marks[3];
    int rollno; 
    int percentage;

} stu[100];

int main()
{
    int n,i,j,passing_per;

    scanf("%d",&n);
    scanf("%d",&passing_per);

        for(i=0; i<n;i++)
        {  
            scanf("%s",stu[i].name);
            scanf("%d",&stu[i].rollno);
            
            int sum=0;
            for(j=0; j<3; j++)
            {
                scanf("%d",&stu[i].marks[j]);
                sum=sum+stu[i].marks[j];
            }
            stu[i].percentage = (sum*100)/300;
        }

        for(i=0; i<n;i++)
        {
            if(stu[i].percentage<passing_per)
            {
                printf("%s\n",stu[i].name);
                printf("%d\n",stu[i].rollno);
            }
        }

return 0;
}