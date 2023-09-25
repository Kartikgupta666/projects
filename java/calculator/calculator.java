import java.util.Scanner;

class calculator {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st no.");
        int num1 = sc.nextInt();
        System.out.println("Enter 2nd no.");
        int num2 = sc.nextInt();
        System.out.println("Choose your operation  1 -> +  ; 2 -> - ; 3 -> * ; 4 -> /  ");
        int num3 = sc.nextInt();

        String state = "This is your Answer";
        String error = "INVALID OPERATION";
        int result = 0;

        if (num3 == 1) {

            result = num1 + num2;

        } else if (num3 == 2) {

            result = num1 - num2;
        } else if (num3 == 3) {

            result = num1 * num2;
        } else if (num3 == 4) {

            result = num1 / num2;
        } else {
            System.out.println(error);
        }

        System.out.println(state);
        System.out.println(result);

        sc.close();

    }

}