import java.util.*;
class hashing{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr1= new int[n];

        for(int i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }

        int[] hash=new int[13];
        for(int i=0;i<n;i++){
            hash[arr1[i]]++;
        }

        int q=sc.nextInt();
        while(q-- >0){
            int number=sc.nextInt();
            System.out.println(hash[number]);
        }

        sc.close();
    }
}