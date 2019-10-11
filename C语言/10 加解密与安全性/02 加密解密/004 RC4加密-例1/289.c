#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(unsigned char *s1,unsigned char *s2)
{
char temp;
temp=*s1;
*s1=*s2;
*s2=temp;
}
void re_S(unsigned char *S)
{
unsigned int i;
for(i=0;i<256;i++)
   S[i]=i;
}
void re_T(unsigned char *T,char *key)
{
int i;
int keylen;
keylen=strlen(key);
for(i=0;i<256;i++)
   T[i]=key[i%keylen];
}
void re_Sbox(unsigned char *S,unsigned char *T)
{
int i;
int j=0;
for(i=0;i<256;i++)
{
   j=(j+S[i]+T[i])%256;
   swap(&S[i],&S[j]);
}
}
void re_RC4(unsigned char *S,char *key)
{
char T[255]={0};
re_S(S);
re_T(T,key);
re_Sbox(S,T);
}
void RC4(FILE *readfile,FILE *writefile,char *key)
{ 
unsigned char S[255]={0};
unsigned char readbuf[1];
int i,j,t; 
re_RC4(S,key);
i=j=0;
while(fread(readbuf,1,1,readfile))
{
   i = (i + 1) % 256;
   j = (j + S[i]) % 256;
   swap(&S[i],&S[j]);
   t = (S[i] + (S[j] % 256)) % 256;
   readbuf[0]=readbuf[0]^S[t];
   fwrite(readbuf,1,1,writefile);
   memset(readbuf,0,1);
}
printf("Encryption or Decryption successed!!!\n");
}
int main(int argc,char *argv[])
{
char *Filename1,*Filename2;
char *key;
FILE *file1,*file2;
Filename1 = argv[1];
Filename2 = argv[2];
key=argv[3];
if ( argc == 4)
{
   printf("Encrypting or Decrypting......\n");
}
else
{ 
   printf("parameters£º \n");
   printf("source | destination |key \n");
   return -1; 
}
if ((file1= fopen(Filename1,"rb")) == NULL|| (file2 = fopen(Filename2,"wb"))==NULL)
{  
   printf("Can't open file\n");
   return -1;
}
    RC4(file1,file2,key);
fclose(file1);
fclose(file2);
return 0;
}
