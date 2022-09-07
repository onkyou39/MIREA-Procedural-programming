import java.util.Random;

public class Main {
    public static void main(String[] args) {
        int[] arr = new int[10];
        Random random = new Random();
        for (int i = 0; i < 10; i++) {
            arr[i] = random.nextInt(100);
        }
        int max = 0;
        for (int i = 0; i < 10; i++) {
            max += arr[i];
        }
        System.out.println("Sum = " + max);
    }
}
