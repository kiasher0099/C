#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    int num;
    char duty[10];
    char name[10];
    char sex[3];
    unsigned char age;
    char edu[10];
    int salary;
    char tel_office[13];
    char tel_home[13];
    char mobile[13];
    char qq[11];
    char address[31];
    struct employee *next;    
}EMP;
    
    char password[9];
    EMP *emp_first,*emp_end;
    char gsave,gfirst;
    
    void addemp(void);
    void findemp(void);
    void listemp(void);
    void modifyemp(void);
    void summaryemp(void);
    void delemp(void);
    void resetpwd(void);
    void readdata(void);
    void savedata(void);
    int modi_age(int s);
    int modi_salary(int s);
    char *modi_field(char *field,char *s,int n);
    EMP *findname(char *name);
    EMP *findnum(int num);
    EMP *findtelephone(char *name);
    EMP *findqq(char *name);
    void displayemp(EMP *emp,char *field,char *name);
    void checkfirst(void);
    void bound(char ch,int n);
    void login();
    void menu();



void addemp()
{
    FILE *fp;
    EMP *emp1;
    int i=0;
    char choice='y';
    
    if((fp=fopen("employee.dat","ab"))==NULL)
    {
        printf("���ļ�employee.dat����\n");
        getch();
        return;                                         
    }     
    
    do{
         i++;
         emp1=(EMP *)malloc(sizeof(EMP));
         
         if(emp1==NULL)
         {
             printf("�ڴ����ʧ�ܣ���������˳���\n");
             getch();
             return;              
         }
         printf("�������%d��Ա������Ϣ��\n",i);
         bound('_',30);
         printf("���ţ�");
         scanf("%d",&emp1->num);
         
         printf("ְ��");
         scanf("%s",&emp1->duty);
         
         printf("������");
         scanf("%s",&emp1->name);
         
         printf("�Ա�");
         scanf("%s",&emp1->sex);
         
         printf("���䣺");
         scanf("%d",&emp1->age);
         
         printf("�Ļ��̶ȣ�");
         scanf("%s",&emp1->edu);
         
         printf("���ʣ�");
         scanf("%d",&emp1->salary);
         
         printf("�칫�绰��");
         scanf("%s",&emp1->tel_office);
         
         printf("��ͥ�绰��");
         scanf("%s",&emp1->tel_home);
         
         printf("�ƶ��绰��");
         scanf("%s",&emp1->mobile);
         
         printf("QQ:");
         scanf("%s",&emp1->qq);
         
         printf("��ַ��");
         scanf("%s",&emp1->address);
         
         emp1->next=NULL;
         if(emp_first==NULL)
         {
             emp_first=emp1;
             emp_end=emp1;                   
         }else {
             emp_end->next=emp1;
             emp_end=emp1;      
         }
         
         fwrite(emp_end,sizeof(EMP),1,fp);
         
         gfirst=0;
         printf("\n");
         bound('_',30);
         printf("\n�Ƿ��������?(y/n)");
         fflush(stdin);
         choice=getch();
         
         if(toupper(choice)!='Y')
         {
             fclose(fp);
             printf("\n������ϣ������������\n");
             getch();
             return;                        
         }
         
         system("cls");      
    }while(1);
}



void bound(char ch,int n)
{
   while(n--)
       putch(ch);
       
   printf("\n");
   return;     
}


/*�״�ʹ�ã������û���Ϣ��ʼ��*/
void checkfirst()
{
    FILE *fp,*fp1; 
    char pwd[9],pwd1[9],pwd2[9],pwd3[9],ch;
    int i;
    char strt='8';    
    
    if((fp=fopen("config.bat","rb"))==NULL)
    {
        printf("\n��ϵͳ���������Ӧ�ĳ�ʼ��������\n");
        bound('_',50);
        getch();
        
        do{
            printf("\n�������룬�벻Ҫ����8λ��");
            for(i=0;i<8&&((pwd[i]=getch())!=13);i++)
                putch('*');
            printf("\n��ȷ��һ�����룺");
            for(i=0;i<8&&((pwd1[i]=getch())!=13);i++) 
                putch('*');    
                
            pwd[i]='\0';  
            pwd1[i]='\0';
            
            if(strcmp(pwd,pwd1)!=0)
                printf("\n�����������벻һ�£����������룡\n\n");
            else break;
            
        }while(1);
        
        if((fp1=fopen("config.bat","wb"))==NULL)
        {
            printf("\nϵͳ����ʧ�ܣ��밴������˳���");
            getch();
            exit(1);                                        
        }
        
        i=0;
        while(pwd[i])
        {
                 
            pwd2[i]=(pwd[i]^ strt);        
            putw(pwd2[i],fp1);
            i++;             
        }
        
        fclose(fp1);
        printf("\n\nϵͳ��ʼ���ɹ�����������˳��������½��룡\n");
        getch();
        exit(1);
        
    }else{
        i=0;
        while(!feof(fp)&&i<8)
            pwd[i++]=(getw(fp)^strt);
            
            
        pwd[i]='\0';
        
        if(i>=8) i--;
        while(pwd[i]!=-1&&i>=0)
            i--;
        
        pwd[i]='\0';
        strcpy(password,pwd); 
    } 
}


void delemp()
{
    int findok=0;
    EMP *emp1,*emp2;
    char name[10],choice;
    
    system("cls");
    printf("\n����Ҫɾ����Ա��������");
    scanf("%s",name);
    
    emp1=emp_first;
    emp2=emp1;
    while(emp1)
    {
        if(strcmp(emp1->name,name)==0)
        {
            findok=1;
            system("cls");
            
            printf("Ա����%s����Ϣ���£�",emp1->name);
            bound('_',40);
            printf("���ţ�%d\n",emp1->num);
            printf("ְ��%s\n",emp1->duty);
            printf("������%s\n",emp1->name);
            printf("�Ա�%s\n",emp1->sex);
            printf("���䣺%d\n",emp1->age);
            printf("�Ļ��̶ȣ�%s\n",emp1->edu);
            printf("���ʣ�%d\n",emp1->salary);
            printf("�칫�绰��%s\n",emp1->tel_office);
            printf("��ͥ�绰��%s\n",emp1->tel_home);
            printf("�ƶ��绰��%s\n",emp1->mobile);
            printf("QQ���룺%s\n",emp1->qq);
            printf("סַ:%\ns",emp1->address);  
            bound('_',40);
            printf("�����Ҫɾ����Ա����(y/n)");
            
            fflush(stdin);
            choice=getchar();
            
            if(choice!='y' && choice!='Y') return;
            if(emp1==emp_first) emp_first=emp1->next;
            else emp2->next=emp1->next;
            
            free(emp1);
            gsave=1;
            savedata();
            return;                           
        }  else{        
            emp2=emp1;
            emp1=emp1->next;
        }
    }    
    if(!findok)
    {
        bound('_',40);
        printf("\nû���ҵ������ǣ�%s����Ϣ��\n",name);
        getch();           
    } 
    return;
}


void displayemp(EMP *emp,char *field,char *name)
{
    if(emp)
    {
        printf("\n%s:%s��Ϣ���£�\n",field,name);
        bound('_',30); 
        printf("���ţ�%d\n",emp->num);
        printf("ְ��%s\n",emp->duty);
        printf("������%s\n",emp->name);
        printf("�Ա�%s\n",emp->sex);
        printf("���䣺%d\n",emp->age);
        printf("�Ļ��̶ȣ�%s\n",emp->edu);
        printf("���ʣ�%d\n",emp->salary);
        printf("�칫�绰��%s\n",emp->tel_office);
        printf("��ͥ�绰��%s\n",emp->tel_home);
        printf("�ƶ��绰��%s\n",emp->mobile);
        printf("QQ���룺%s\n",emp->qq);
        printf("סַ:%s\n",emp->address);
        bound('_',30);      
    }else {
    bound('_',40);
    printf("���Ͽ���û��%sΪ��%s��Ա����������ȷ�ϣ�",field,name);
    }
    return;
}


EMP *findname(char *name)
{
    EMP *emp1;
    emp1=emp_first;
    
    while(emp1)
    {
        if(strcmp(name,emp1->name)==0)  return emp1;
        emp1=emp1->next;          
    }    
    return NULL;
}


EMP *findnum(int num)
{
   EMP *emp1;
   
   emp1=emp_first;
   while(emp1)
   {
       if(num==emp1->num)  return emp1;
       emp1=emp1->next;           
   }  
   return NULL;  
}

EMP *findtelephone(char *name)
{
     EMP *emp1;
     
     emp1=emp_first;
     while(emp1)
     {
         if((strcmp(name,emp1->tel_office)==0)||
         (strcmp(name,emp1->tel_home)==0)||
         (strcmp(name,emp1->mobile)==0))
         return emp1;
         emp1=emp1->next;
                 
     }  
      return NULL;       
}


EMP *findqq(char *name)
{
    EMP *emp1;
    
    emp1=emp_first;
    while(emp1)
    {
        if(strcmp(name,emp1->qq)==0)  return emp1;
        emp1=emp1->next;           
    }  
    return NULL;  
}


void findemp()
{
     int choice,ret=0,num;
     char str[13];
     EMP *emp1;
     
     system("cls");
     
     do{
         printf("\t��ѯԱ����Ϣ\n");
         bound('_',30);
         printf("\t1.��������ѯ\n");
         printf("\t2.�����Ų�ѯ\n");
         printf("\t3.���绰��ѯ\n");
         printf("\t4.��QQ�Ų�ѯ\n");
         printf("\t0.�������˵�\n");
         bound('_',30);
         printf("\n��ѡ��˵���");
         
         do{
             fflush(stdin);
             choice=getchar();
             system("cls");
             
             switch(choice)
             {
                 case '1':
                      printf("\n����Ҫ��ѯ��Ա��������");
                      scanf("%s",str);
                      
                      emp1=findname(str);
                      displayemp(emp1,"����",str);
                      getch();
                      break; 
                      
                 case '2':
                      printf("\n������Ҫ��ѯ��Ա���Ĺ���"); 
                      scanf("%d",&num); 
                      
                      emp1=findnum(num);
                      itoa(num,str,10);
                      displayemp(emp1,"����",str);
                      getch();
                      break;
                      
                  case '3':
                       printf("\n����Ҫ��ѯԱ���ĵ绰:");
                       scanf("%s",str);
                       
                       emp1=findtelephone(str); 
                       displayemp(emp1,"�绰",str);
                       getch();
                       break;
                       
                  case '4':
                       printf("\n����Ҫ��ѯ��Ա����QQ�ţ�");
                       scanf("%s",str);
                       
                       emp1=findqq(str);
                       displayemp(emp1,"QQ����",str);
                       getch();
                       break;
                       
                   case '0':
                        ret=1;
                        break;          
             }                         
         }while(choice<'0'||choice>'4');
         
         system("cls");
         if(ret) break;
     }while(1);         
}


void listemp()
{
    EMP *emp1;
    
    printf("\n���Ͽ��е�Ա����Ϣ�б�\n");
    bound('_',40);
    emp1=emp_first;
    
    while(emp1) 
    {
        printf("���ţ�%d\n",emp1->num);
        printf("ְ��%s\n",emp1->duty);
        printf("������%s\n",emp1->name);
        printf("�Ա�%s\n",emp1->sex);
        printf("���䣺%d\n",emp1->age);
        printf("�Ļ��̶ȣ�%s\n",emp1->edu);
        printf("���ʣ�%d\n",emp1->salary);
        printf("�칫�绰��%s\n",emp1->tel_office);
        printf("��ͥ�绰��%s\n",emp1->tel_home);
        printf("�ƶ��绰��%s\n",emp1->mobile);
        printf("QQ���룺%s\n",emp1->qq);
        printf("סַ:%s\n",emp1->address);  
        bound('_',40);
        emp1=emp1->next;      
    }    
    printf("\n��ʾ��ϣ���������˳���\n");
    getch();
    return;
}


/*����¼����*/
void login()
{
    int i,n=3;
    char pwd[9];
    
    do{
        printf("���������룺");
        for(i=0;i<8 && ((pwd[i]=getch())!=13);i++)
            putch('*');
            
        pwd[i]='\0';
        if(strcmp(pwd,password))
        {
            printf("\n����������������룡\n");
            system("cls");
            n--;                        
        }else break;
    } while(n>0);
    
    if(!n)
    {
        printf("���˳���������������������");
        getch();
        exit(1);      
    }
}


void menu()
{
    char choice;
    
    system("cls");
    
    do{
        printf("\t ��ҵԱ������ϵͳ\n");
        bound('_',40);
        printf("\t1.����Ա����Ϣ\n");
        printf("\t2.��ѯԱ����Ϣ\n");
        printf("\t3.��ʾԱ����Ϣ\n");
        printf("\t4.�޸�Ա����Ϣ\n");
        printf("\t5.ɾ��Ա����Ϣ\n");
        printf("\t6.ͳ��Ա����Ϣ\n");
        printf("\t7.����ϵͳ����\n");
        printf("\t0.�˳�ϵͳ\n");
        bound('_',40);
        printf("\n��ѡ������Ҫ�Ĳ�����");
        
        do{
            fflush(stdin);
            choice=getchar();
            system("cls");
            
            switch(choice)
            {
                case '1':
                   addemp();
                   break;
                case '2':
                   if(gfirst)
                   {
                       printf("ϵͳ��Ϣ����Ա����Ϣ���������Ա����Ϣ��\n");
                       getch();
                       break;          
                   }  
                   
                   findemp();
                   break;
                case '3':
                   if(gfirst)
                   {
                       printf("ϵͳ��Ϣ����Ա����Ϣ���������Ա����Ϣ��\n");
                       getch();
                       break;       
                   }
                   
                   listemp();
                   break;
               case '4':
                   if(gfirst)
                   {
                       printf("ϵͳ��Ϣ����Ա����Ϣ���������Ա����Ϣ��\n");
                       getch();
                       break;       
                   }
                   
                   modifyemp();
                   break;
               case '5':
                    if(gfirst)
                   {
                       printf("ϵͳ��Ϣ����Ա����Ϣ���������Ա����Ϣ��\n");
                       getch();
                       break;       
                   }
                   
                   delemp();
                   break;
               case '6':
                    if(gfirst)
                   {
                       printf("ϵͳ��Ϣ����Ա����Ϣ���������Ա����Ϣ��\n");
                       getch();
                       break;       
                   }
                   
                   summaryemp();
                   break; 
               case '7':
                   resetpwd();
                   break;
               case '0':
                   savedata();
                   exit(0);        
            }                             
        } while(choice<'0'||choice>'7');  
        
        
         system("cls");        
    }while(1);    
}


int modi_salary(int salary){
    int newsalary;
    printf("ԭ���Ĺ�����Ϊ��%d",salary);
    printf("�µĹ�������");
    scanf("%d",&newsalary);
    
    return(newsalary);
}



int modi_age(int age){
    int newage;
    printf("ԭ��������Ϊ��%d",age);
    printf("�µ����䣺");
    scanf("%d",&newage);
    
    return(newage);
}
char *modi_field(char *field,char *content,int len)
{
     char *str;
     str=malloc(sizeof(char)*len);
     if(str==NULL)
     {
         printf("�ڴ����ʧ�ܣ���������˳���");
         getch();
         return NULL;             
     }
     printf("ԭ��%sΪ��%s\n",field,content);
     printf("�޸�Ϊ�����ݲ�Ҫ����%d���ַ�������",len);
     scanf("%s",str);
     
     return str;
}

void modifyemp()
{
     EMP *emp1;
     char name[10],*newcontent;
     int choice;
     
     printf("\n��������Ҫ�޸ĵ�Ա������Ϣ:");
     scanf("%s",&name);
     
     emp1=findname(name);
     displayemp(emp1,"����",name);
     
     if(emp1)
     {
         printf("\n ��������Ҫ�޸ĵ�����ѡ�\n");
         bound('_',40);
         printf("1.�޸�ְ��                2.�޸�����\n");
         printf("3.�޸��Ļ��̶�            4.�޸Ĺ���\n");
         printf("5.�޸İ칫�ҵ绰          6.�޸ļ�ͥ�绰\n");
         printf("7.�޸��ƶ��绰            8.�޸�QQ���� \n");
         printf("9.�޸�סַ                0.����\n  ");
         bound('_',40);
         
         do{
             fflush(stdin);
             choice=getchar();
             switch(choice) 
             {
                 case '1':
                      newcontent=modi_field("ְ��",emp1->duty,10);
                      if(newcontent!=NULL)
                      {
                          strcpy(emp1->duty,newcontent);
                          free(newcontent);                    
                      } 
                      break;
                 case '2':
                      emp1->age=modi_age(emp1->age);
                      break;
                  case '3':
                      newcontent=modi_field("�Ļ��̶�",emp1->edu,10);
                      if(newcontent!=NULL)
                      {
                          strcpy(emp1->edu,newcontent);
                          free(newcontent);                    
                      } 
                      break;
                  case '4':
                      emp1->salary=modi_salary(emp1->salary);
                      break;
                 case '5':
                      newcontent=modi_field("�칫�ҵ绰",emp1->tel_office,13);
                      if(newcontent!=NULL)
                      {
                          strcpy(emp1->tel_office,newcontent);
                          free(newcontent);                    
                      } 
                      break;
                 case '6':
                      newcontent=modi_field("��ͥ�绰",emp1->tel_home,13);
                      if(newcontent!=NULL)
                      {
                          strcpy(emp1->tel_home,newcontent);
                          free(newcontent);                    
                      } 
                      break;
                  case '7':
                      newcontent=modi_field("�ƶ��绰",emp1->mobile,12);
                      if(newcontent!=NULL)
                      {
                          strcpy(emp1->mobile,newcontent);
                          free(newcontent);                    
                      } 
                      break;
                  case '8':
                      newcontent=modi_field("QQ����",emp1->qq,10);
                      if(newcontent==NULL)
                      {
                          strcpy(emp1->qq,newcontent);
                          free(newcontent);                    
                      } 
                      break;  
                  case '9':
                      newcontent=modi_field("סַ",emp1->address,30);
                      if(newcontent!=NULL)
                      {
                          strcpy(emp1->address,newcontent);
                          free(newcontent);                    
                      } 
                      break;     
                  case '0':
                      return;             
             }             
         }while(choice<'0' || choice>'9');
         
         gsave=1;
         savedata();
         printf("\n�޸���ϣ���������˳���\n");
         getch();
     }  
     return;   
}



/*��ȡ����*/ 
void readdata(void)
{
    FILE *fp;
    EMP *emp1;
    
    if((fp=fopen("employee.dat","rb"))==NULL)
    {
        gfirst=1;
        return;                                        
    }     
    
    while(!feof(fp))
    {
        emp1=(EMP *)malloc(sizeof(EMP));
        if(emp1==NULL)
        {
            printf("�ڴ����ʧ�ܣ�\n");
            getch();
            return;              
        }          
        
        fread(emp1,sizeof(EMP),1,fp);
        if(feof(fp))  break;
        
        if(emp_first==NULL)
        {
           emp_first=emp1;
           emp_end=emp1;                   
        }else{
            emp_end->next=emp1;
            emp_end=emp1;   
        }
        emp_end->next=NULL;
    }
    gfirst=0;
    fclose(fp);
}


void resetpwd()
{
    char pwd[9],pwd1[9],ch;
    int i;
    FILE *fp1;
    
    system("cls");
    
    printf("\n����������룺\n");
     for(i=0;i<8 && ((pwd[i]=getch())!=13);i++)
            putch('*');
            
        pwd[i]='\0';
        if(strcmp(password,pwd)!=0)
        {
            printf("\n��������밴������˳���\n");
            getch();
            return;             
        }   
     do{
         printf("\n���������룬�벻Ҫ����8λ��");
            for(i=0;i<8&&((pwd[i]=getch())!=13);i++)
                putch('*');
            printf("\n��ȷ��һ�����룺");
            for(i=0;i<8&&((pwd1[i]=getch())!=13);i++) 
                putch('*');    
                
            pwd[i]='\0';  
            pwd1[i]='\0';
            
            if(strcmp(pwd,pwd1)!=0)
                printf("\n�����������벻һ�£����������룡\n\n");
            else break;
            
        }while(1);
        
        if((fp1=fopen("config.bat","wb"))==NULL)
        {
            printf("\nϵͳ����ʧ�ܣ��밴������˳���");
            getch();
            exit(1);                                        
        }
        
        i=0;
        while(pwd[i])
        {
            putw(pwd[i],fp1);
            i++;             
        }
        
        fclose(fp1);
        printf("\n�����޸ĳɹ�����������˳���\n");
        getch();
        return;       
}


void savedata()
{
      FILE *fp;
      EMP *emp1;
      
      if(gsave==0) return;
      
      if((fp=fopen("employee.dat","wb"))==NULL)
      {
          printf("���ļ�employee.dat����\n");
          getch();
          return;                                         
      }   
      
      emp1=emp_first;
      while(emp1)
      {
          fwrite(emp1,sizeof(EMP),1,fp);
          emp1=emp1->next;          
      }
      
      gsave=0;
      fclose(fp);
}


void summaryemp()
{
   EMP *emp1;
   int sum=0,num=0,man=0,woman=0;
   
   emp1=emp_first;
   while(emp1)
   {
       num++;
       sum+=emp1->salary;
       if(strcmp(emp1->sex,"man")==0) man++;
       else woman++;
       emp1=emp1->next;          
   }     
   
   printf("\n���������Ա����ͳ����Ϣ��\n");
   bound('_',40);
   printf("Ա�������ǣ�%d\n",num);
   printf("Ա���Ĺ��������ǣ�%d\n",sum);
   printf("��Ա����Ϊ��%d\n",man);
   printf("ŮԱ����Ϊ��%d\n",woman);
   bound('_',40);
   printf("��������˳���\n");
   getch();
   return;
}


int main(void)
{
  emp_first=emp_end=NULL;
  gsave=gfirst=0;
  
  checkfirst();
  login();
  readdata();
  menu();
  system("PAUSE");	
  return 0;
}
