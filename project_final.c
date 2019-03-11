#include<stdio.h>
#include<string.h>
#define TRUE 1
typedef struct{
    char name[1000],gender[5000],address[2000],email[2000],occupation[1000],blood[5000],
         age[100],height[111],weight[111],phone_no[111],id_no[111];
    char problem[1000],department[100],doctor[100],in_or_out[111];
}detail;
FILE *fpt,*fptnew;
int id=1000;
detail readpatient(detail patient);
void writefile1(detail patient);
detail readfile(detail patient);
void doctor(detail patient);
void doctor1(char p[][1000]);
void writefile2(detail patient);
void print123(detail patient);
void writefile3(char n[],char pa[][1000]);
main()
{
    char n[100],c,s[1000],p[100][1000];
    int flag=TRUE,new_or_old,count,i;
    long int size;
    detail patient,p1;
    fpt=fopen("record1.txt","a+");
    if(fpt==NULL)
    printf("error");
    printf("new patient or old patient(if new enter as \'1\' else enter as \'0\'");
    scanf("%d",&new_or_old);
    if(new_or_old==1)
    {
        printf("enter patient details:\n");
        patient=readpatient(patient);  
        writefile1(patient); 		   
        doctor (patient);
        fptnew=fopen("summary.txt","w");
         writefile2(patient);
        fclose(fptnew);
              }              
              if(new_or_old==0)
              {
                 printf("enter name:");
                  scanf("%s",&n);
                  while(flag)
                 {
                 	fscanf(fpt,"%s",&s);            
                 	if(strcmp(s,n)==0)
                 	{
                 		printf("%s\n",s);
                 		for(i=0;i<=9;i++)
                 		{
                 			fscanf(fpt,"%s",&p[i]);
                 			printf("%s\n",p[i]);
						 }
                 	    break;
                 	    fclose(fpt);
                 	}
                   } 
                 doctor1 (p);
                 fptnew=fopen("summary.txt","w"); 
				 writefile3(s,p);   
				 fclose(fptnew);             
               }  
   writefile2(patient);
}
detail readpatient(detail patient)
{
    printf("\nname:");
    scanf("%s",patient.name);
    printf("\nreg no.:");
    scanf("%s",patient.id_no);
    printf("\ngender:");
    scanf("%s",patient.gender);
    printf("\nblood group:");
    scanf("%s",patient.blood);
    printf("\nage:");
    scanf("%s",patient.age);
    printf("\nheight:");
    scanf("%s",patient.height);
    printf("\nweight:");
    scanf("%s",patient.weight);
    printf("\nphone no.:");
    scanf("%s",patient.phone_no);
    printf("\naddress:");
    scanf("%s",patient.address);
    printf("\noccupation:");
    scanf("%s",patient.occupation);
    printf("\ne-mail id:");
    scanf("%s",patient.email);
    return(patient);
}
void writefile1(detail patient)
{   
    fprintf(fpt,"%s\n",patient.name);
    fprintf(fpt,"%s\n",patient.id_no);       
    fprintf(fpt,"%s\n",patient.gender);
    fprintf(fpt,"%s\n",patient.blood);
    fprintf(fpt,"%s\n",patient.age);
    fprintf(fpt,"%s\n",patient.height);
    fprintf(fpt,"%s\n",patient.weight);
    fprintf(fpt,"%s\n",patient.phone_no);
    fprintf(fpt,"%s\n",patient.address);
    fprintf(fpt,"%s\n",patient.occupation);
    fprintf(fpt,"%s\n",patient.email);
    fclose(fpt);
}
void doctor(detail patient)
{
    printf("\nproblem:");
    scanf("%s",&patient.problem);
    printf("\ndepartment(ENT/general/ortho/cardiac/paediatrition):");
    scanf("%s",&patient.department);
    printf("\ndoctor name:");
    scanf("%s",&patient.doctor);
    printf("\ninpatient or outpatient(enter \'in\' for inpatient and \'out\' for outpatient):");
    scanf("%s",&patient.in_or_out);
}
void writefile2(detail patient)
{
    fprintf(fptnew,"%s\n",patient.name);
    fprintf(fptnew,"%s\n",patient.id_no);
    fprintf(fptnew,"%s\n",patient.gender);
    fprintf(fptnew,"%s\n",patient.blood);
    fprintf(fptnew,"%s\n",patient.age);
    fprintf(fptnew,"%s\n",patient.height);
    fprintf(fptnew,"%s\n",patient.weight);
    fprintf(fptnew,"%s\n",patient.phone_no);
    fprintf(fptnew,"%s\n",patient.address);
    fprintf(fptnew,"%s\n",patient.occupation);
    fprintf(fptnew,"%s\n",patient.email);
    fprintf(fptnew,"%s\n",patient.problem);
    fprintf(fptnew,"%s\n",patient.department);
    fprintf(fptnew,"%s\n",patient.doctor);
    fprintf(fptnew,"%s\n",patient.in_or_out);
}
void doctor1(char p[][1000])
{
    printf("\nproblem:");
    scanf("%s",&p[10]);
    printf("\ndepartment(ENT/general/ortho/cardiac/paediatrition):");
    scanf("%s",&p[11]);
    printf("\ndoctor name:");
    scanf("%s",&p[12]);
    printf("\ninpatient or outpatient(enter \'in\' for inpatient and \'out\' for outpatient):");
    scanf("%s",&p[13]);
    return ;
}
void writefile3(char n[],char pa[][1000])
{
    fprintf(fptnew,"%s\n",n);
    fprintf(fptnew,"%s\n",pa[0]);
    fprintf(fptnew,"%s\n",pa[1]);
    fprintf(fptnew,"%s\n",pa[2]);
    fprintf(fptnew,"%s\n",pa[2]);
    fprintf(fptnew,"%s\n",pa[3]);
    fprintf(fptnew,"%s\n",pa[4]);
    fprintf(fptnew,"%s\n",pa[5]);
    fprintf(fptnew,"%s\n",pa[6]);
    fprintf(fptnew,"%s\n",pa[7]);
    fprintf(fptnew,"%s\n",pa[8]);
    fprintf(fptnew,"%s\n",pa[9]);
    fprintf(fptnew,"%s\n",pa[10]);
    fprintf(fptnew,"%s\n",pa[11]);
    fprintf(fptnew,"%s\n",pa[12]);
    fprintf(fptnew,"%s\n",pa[13]);
}
