import java.util.*;
class Main
{
    public static void main(String args[])
    {
     Scanner sc = new Scanner(System.in);
     int temp,tt=0,min,d=0,i,j;      
     float atat=0,awt=0,stat=0,swt=0;
     System.out.println("enter no of process");;
     int n = sc.nextInt();
     int a[] = new int[n];
     int b[] = new int[n];
     int e[] = new int[n];
     int tat[] = new int[n];
     int wt[] = new int[n];
     System.out.println("Enter Arrival time");
     for(i=0;i<n;i++)
     {
        a[i] = sc.nextInt();
     }
     System.out.println("Enter Burst time");
     for(i=0;i<n;i++)
     {    
        b[i] = sc.nextInt();
     }
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
   
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
     }
      min=a[0];
      for(i=0;i<n;i++)
      {
            if(min>a[i])
            {
                  min=a[i];
                  d=i;
            }
      }
      tt=min;
      e[d]=tt+b[d];
      tt=e[d];

      for(i=0;i<n;i++)
      {
            if(a[i]!=min)
            {
                  e[i]=b[i]+tt;
                  tt=e[i];
            }
      }
      for(i=0;i<n;i++)
      {

            tat[i]=e[i]-a[i];
            stat=stat+tat[i];
            wt[i]=tat[i]-b[i];
            swt=swt+wt[i];
      }
      atat=stat/n;
      awt=swt/n;
      System.out.println("Process  Arrival time  Bursttime  Waitingtime  Turnaround time");

    for(i=0;i<n;i++)
    {
    System.out.println("P" + (i+1) + "              "+a[i]+"                "+b[i]+"                  "+wt[i]+"               "+tat[i]);
    }
    System.out.println("Average wait time " + awt);
    System.out.println("Average turn around time " + atat);
}
}