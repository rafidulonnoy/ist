# include<stdio.h>
# include<math.h>
int main (){
   double a,b,c,root1,root2,d;
   printf ("enter the values of a b c");
   scanf (" %lf %lf %lf" , &a, &b, &c);
   d = (b*b) - (4*a*c);
   if (d>0){
      root1 = (-b+sqrt(d)) / (2*a);
      root2 = (-b-sqrt(d)) / (2*a);
      printf ("The real roots = %.2lf %.2lf" , root1, root2);
   }
   else if (d==0){
      root1 = root2 = -b/(2*a);
      printf ("roots are equal = %.2lf %.2lf" , root1, root2);
   }
   else
      printf("Roots are imaginary");
    return 0;
}