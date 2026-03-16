import java.util.Arrays;
public class arrays1 {
    public static void main(String[] args ){
        int[] a = new int[5];

        System.out.println("Default values : ");
        for(int x : a ) System.out.print(x + " ");
        System.out.println();

        a[0] = 10; a[1] = 20; a[2] = 30; a[3] = 40; a[4] = 50;

        System.out.println("Using for loop : ");
        for(int i = 0; i<a.length;i++) System.out.print(a[i] + " ");
        System.out.println();


        System.out.println("Using for-each : ");
        for(int x : a) System.out.print(x + " ");
        System.out.println();

        Arrays.sort(a);
        System.out.println("Sorted : " + Arrays.toString(a));

        int pos = Arrays.binarySearch(a , 30);
        System.out.println("Index of 30 is : " + pos);

        int[] copy = Arrays.copyOf(a , a.length);
        System.out.println("Copy : " + Arrays.toString(copy));

        int[][] m = {
            {1,2,3},
            {4,5,6}
        };

        System.out.println("2D Array : ");
        for(int i = 0 ; i < m.length ; i++){
            for(int j = 0 ; j < m[i].length; j++){
                System.out.print(m[i][j]);
            }
            System.out.println();
        }
    }
}
