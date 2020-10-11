public class Main {
    public static void main(String[] args) {
        int x = new java.util.Scanner(System.in).nextInt();
        int s = x%60;
        int m = x%3600/60;
        int h = x/3600;
        System.out.printf("%d:%d:%d\n", h, m, s);
        Scanner.close();
    }
}