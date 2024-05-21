public class Excep {

    public static void main(String[] args) {
        int a = 5;
        int[] arr = { 1, 2, 3, 4, 5 };
        int b = 0;

        try {
            // System.out.println(a / b);
            System.out.println(arr[6]);
        } catch (ArithmeticException E) {
            System.out.println(E);
        } catch (ArrayIndexOutOfBoundsException E) {
            System.out.println(E);
        } finally {
            System.out.println("Program End SuccessFully");
        }
    }

}
