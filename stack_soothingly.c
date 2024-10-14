#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main(){
    char stack[100];
    int top=-1;
    bool odd;
    odd=true;
    FILE*fp1=fopen("part3.in","r");
    FILE*fp2=fopen("part3.out","w");
    FILE*fp3=fopen("CS-EASY-02-2.txt","r");
    if(fp1==NULL){
        printf("can't open file1\n"); 
    }
    if (fp2==NULL)
    {
        printf("can't open file2\n");
    }
    if (fp3==NULL)
    {
        printf("can't open file3\n");
    }
   
    int times,i1,i2,i3;
    for(i1=0;i1<34;i1++){
        fscanf(fp1,"%d",&times);
        if(odd==true){
        for(i2=0;i2<times;i2++){
            top++;
        if (top>-1&&top<100)
        {
            fscanf(fp3,"%c",&stack[top]);
        }
        
    }
    odd=false;
      }
         else{
            for(i3=0;i3<times;i3++){
             if(top>-1){
             fprintf(fp2,"%c",stack[top]);
             
             top--;}
            }
             
             odd=true;
             
    }
      
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
    return 0;
}