// import java.util.*;
// public class hashing2 {
//     public static void main(String args[]){
//      Scanner sc = new Scanner(System.in);
//     String s=sc.nextLine();

//     int []hash= new int[26];
//     for(int i=0;i<s.length();i++){
//         hash[s.charAt(i)-'a']++;
//     }

//     int q=sc.nextInt();
//     while(q-- >0){
//         char c = sc.next().charAt(0);
//     System.out.println(hash[c-'a']);
//     }
// }
// }

//alternate approach

import java.util.*;
public class hashing2 {
    public static void main(String args[]){
     Scanner sc = new Scanner(System.in);
    String s=sc.nextLine();

    int []hash= new int[256];
    for(int i=0;i<s.length();i++){
        hash[s.charAt(i)]++;
    }

    int q=sc.nextInt();
    while(q-- >0){
        char c = sc.next().charAt(0);
    System.out.println(hash[c]);
    }
}
}

