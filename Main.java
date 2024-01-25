import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        String m;

        for (int i = 0; i < x; i++) {
            m = scanner.next();
            if (m.charAt(1) == '+') {
                x = x + 1;
            } else {
                x = x - 1;
            }
        }
        System.out.println(x);
    }
}
