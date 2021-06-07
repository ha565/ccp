#include<stdio.h>
float comp(float a,float b,float c){
    if (a<b && a<c )
    {
      
           printf("%f is the smallest integer.\n" ,a);
      
}
else if (b<a && b<c)
{
   printf("%f is the smallest integer.\n" ,b);
}
else{
  printf("%f is the smallest integer.\n" ,c);  
}
return 0;
}
int main()
{ 
    float a,b,c;
    printf("Enter any three integers:\n");
    scanf("%f %f %f", &a,&b,&c);
    comp(a,b,c);
    return 0;
}



