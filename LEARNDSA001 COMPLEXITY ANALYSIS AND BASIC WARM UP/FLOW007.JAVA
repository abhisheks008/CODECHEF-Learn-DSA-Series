import java.util.*;
class main{
   public static void main(String[] args){
      Scanner sc=new Scanner(System.in);
      int t=sc.nextInt();
      while(t-->0){
         int n=sc.nextInt();
         int s=0;
         while(n!=0){
           s+=n%10;
           n/=10;
           if(n>0)
             s*=10;
         }
         System.out.println(s);
      }
    }
}
