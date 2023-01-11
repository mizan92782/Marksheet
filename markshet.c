
#include<stdio.h>
#include<conio.h>


int main()
{

float num[4],sum=0;
int i,pass=1,note=1;
char subject[4][10]={"BANGLA","ENGLISH","ARABIC","SCIENCE",};


printf("Enter  student Mark : \n");\

for(i=0;i<4;i++)
{

 printf("%s",subject+i);

   printf("= ");
  scanf("%f",&num[i]);
  sum+=num[i];

if(num[i]<33) pass=0;
if(num[i]<0 || num[i]>100) note=0;

}

 if(note){
    printf("%c",(int)7);
printf("\n\n\t\t %c STUDENT MARKSHEET %c\n",(char)176,(char)176);


printf("\n\nSTUDENT OBTAIN NUMBER\n ");
for(i=0;i<4;i++)
{

 printf("%s",subject+i);
printf(" : %.2f\n",num[i]);
}
 }
printf("\n");



if(note)
{
  if(pass)
  {
      printf("STUDENT RESULT : PASS\n");
      printf("STUDENT AVERAGE NUMBER : %.2f ",(sum/4) );
        int grade=(sum/4)/10;
            printf("\nSTUDENT GRADE : ");
          switch(grade)
          {
              case 3 : printf("D"); break;
               case 4 : printf("C");break;
               case 5 : printf("B");break;
               case  6: printf("A-");break;
               case  7: printf("A");break;
               case  8:
               case  9: printf("A+");break;
          }

               if(grade >=8) printf("\nCOMMENT : EXCELLENT");
               if(grade==7) printf("\nCOMMENT : VERY GOOD");
               if(grade==6) printf("\nCOMMENT : GOOD");
               if(grade==5) printf("\nCOMMENT : NEDE TO BE SINCERE");
               if(grade <5) printf("\nCOMMENT : NOT AS EXPECTED");
  }else{

  printf("STUDENT RESULT : FAIL\n");
  }


}else
{
    printf("PLZ,ENTER CORRECT MARKS");
}


getch();

    return 0;

}
