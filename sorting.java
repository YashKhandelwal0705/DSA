import java.util.ArrayList;
import java.util.*;
public class sorting {
    public static void bubbleSort(int arr[], int n)
    {
        //code here
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }













    public static void selectionSort(int arr[], int n)
	{
	    //code here
	    for(int i=0;i<=n-2;i++){
	        int mini=i;
	        for(int j=i;j<=n-1;j++){
	            if(arr[j]<arr[mini]){
	                mini=j;
	            }
	        }
	        int temp=arr[mini];
	        arr[mini]=arr[i];
	        arr[i]=temp;
	    }
	    
	}










    public static void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }






public static void merge(int arr[], int l, int m, int r)
{
     // Your code here
    ArrayList<Integer> temp = new ArrayList<>(); 
     int left=l;
     int right=m+1;
     
     while(left<=m && right <=r){
         if(arr[left]<=arr[right]){
            temp.add(arr[left]);
            left++;
         }
         else{
             temp.add(arr[right]);
             right++;
         }
     }
     
     while(left<=m){
         temp.add(arr[left]);
         left++;
     }
     
     while(right<=r){
         temp.add(arr[right]);
         right++;
     }
     
     for(int i=l;i<=r;i++){
         arr[i]=temp.get(i-l);
    
     }
}
public static void mergeSort(int arr[], int l, int r)
{
    //code here
    if(l==r) return;
    int m=(l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}




    

    public static void main(String args[]){

    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();
    
    int [] arr=new int[n];
    for(int i=0;i<arr.length;i++){
        arr[i]=sc.nextInt();
    }

    //insertionSort(arr,n);
    mergeSort(arr,0,arr.length-1);
    for(int i=0;i<=arr.length-1;i++){
        System.out.print(arr[i]+ " ");
    }
}


}
















